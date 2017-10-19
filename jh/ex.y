   1: %{

   2: // include whole header file to use this code.

   3: #include <stdio.h>

   4: #include <stdlib.h>

   5: #include <string.h>

   6: #include <fstream>

   7: using std::ofstream;

   8:  

   9: #include "visitor/PrettyPrintVisitor.h"

  10: #include "ast/SyntaxTree.h"

  11: #include "visitor/SymbolTableHeader.h"

  12:  

  13: // declare the extern things to use scanner

  14: extern FILE *yyin;

  15: extern void yyerror(const char *s);

  16: extern int yylex();

  17: extern int yyparse();

  18:  

  19: Program* PA;                                            // static Program object

  20: char* empty_string = new char[4];                        // empty string to represent epsilon string

  21: char* java_filename = new char[64];                        // input java file name

  22:  

  23: SymbolTable* Program_SymbolTable = new SymbolTable();    // SymbolTable

  24: int SymbolTable::class_start_point = 0;                    // class base pointer

  25:  

  26: ofstream fout;                                            // write stream

  27:  

  28:  

  29: %}

  30:  

  31: %union    {

  32:     int TT_NUMBER;

  33:     int TT_UNOP;

  34:     Identifier* TT_ID;

  35:     

  36:     /* Non Terminal Type */

  37:     Program* NTT_Program;

  38:     MainClass* NTT_MainClass;

  39:     ClassDecl* NTT_ClassDeclaration;

  40:     ClassDeclList* NTT_EClassDeclaration;

  41:     MemberDecl* NTT_FMDeclaration;

  42:     MemberDeclList* NTT_EFMDeclaration;

  43:     MemberDecl* NTT_FieldDeclaration;

  44:     MemberDecl* NTT_MethodDeclaration;

  45:     ModifierList* NTT_Modifier;

  46:     Type* NTT_Type;

  47:     ParamList* NTT_ParameterList;

  48:     Ref* NTT_Ref;

  49:     Identifier* NTT_RefExtra;

  50:     ArgList* NTT_ArgList;

  51:     ArgList* NTT_ArgExp;

  52:     Statement* NTT_Statement;

  53:     StatementList* NTT_EStatement;

  54:     Expr* NTT_Expression;

  55:     

  56: };

  57:  

  58: %token <TT_ID>    IDENT            /* id */

  59: %token <TT_NUMBER>     NUMBER    /* num */

  60: %token OP01        /* '>' */

  61: %token OP02        /* '<' */

  62: %token OP03        /* '!' */

  63: %token OP04        /* '==' */

  64: %token OP05        /* '<=' */

  65: %token OP06        /* '>=' */

  66: %token OP07        /* '!=' */

  67: %token OP08        /* '&&' */

  68: %token OP09        /* '||' */

  69: %token OP10        /* '+' */

  70: %token OP11        /* '-' */

  71: %token OP12        /* '*' */

  72: %token OP13        /* '/' */

  73:  

  74:  

  75: %token CLASS        /* class */

  76: %token MAIN_T        /* main */

  77: %token STRING        /* String */

  78: %token EXTENDS        /* extends */

  79: %token VOID            /* void */

  80: %token RETURN_T        /* return */

  81: %token INT_T        /* int */

  82: %token BOOLEAN_T    /* boolean */

  83: %token PUBLIC_T        /* public */

  84: %token PRIVATE_T    /* private */

  85: %token STATIC_T        /* static */

  86: %token THIS_T        /* this */

  87: %token IF_T            /* if */

  88: %token ELSE_T        /* else */

  89: %token WHILE_T        /* while */

  90: %token PRINTLN_T    /* System.out.println */

  91: %token TRUE_T        /* true */

  92: %token FALSE_T        /* false */

  93: %token NULL_T        /* null */

  94: %token NEW_T        /* new */

  95: %token SMALLPL_T     /* ( */

  96: %token SMALLPR_T     /* ) */

  97: %token MIDPL_T         /* { */

  98: %token MIDPR_T         /* } */

  99: %token BIGPL_T         /* [ */

 100: %token BIGPR_T         /* ] */

 101: %token EQU_T         /* = */

 102: %token SEMICOL_T     /* ; */

 103: %token DOT_T         /* . */

 104: %token COMMA_T         /* , */

 105:  

 106:  

 107:  

 108: %type <TT_UNOP>                    UNOP            /* unop */

 109:  

 110: %type <NTT_Program>                Program

 111: %type <NTT_MainClass>            MainClass

 112: %type <NTT_ClassDeclaration>    ClassDeclaration

 113: %type <NTT_EClassDeclaration>    EClassDeclaration

 114: %type <NTT_FMDeclaration>        FMDeclaration            /* FieldDeclaration | MethodDeclaration */

 115: %type <NTT_EFMDeclaration>        EFMDeclaration

 116: %type <NTT_FieldDeclaration>    FieldDeclaration

 117: %type <NTT_MethodDeclaration>    MethodDeclaration

 118: %type <NTT_Modifier>            Modifier

 119: %type <NTT_Type>                Type

 120: %type <NTT_ParameterList>        ParameterList

 121: %type <NTT_Ref>                    Ref

 122: %type <NTT_RefExtra>            RefExtra                /* In the template, last (.id)* is just identifier. */

 123: %type <NTT_ArgList>                ArgList

 124: %type <NTT_ArgExp>                ArgExp

 125: %type <NTT_Statement>            Statement

 126: %type <NTT_EStatement>            EStatement

 127: %type <NTT_Expression>            Expression

 128:  

 129:  

 130:  

 131:  

 132: /* http://www.difranco.net/cop2551/java_op-prec.htm */

 133: /* write the operation precedence from Java */

 134: %right    EQU_T                    /* = */

 135: %left    OP09                    /* || */

 136: %left    OP08                    /* && */

 137: %left    OP04 OP07                /* == != */

 138: %left    OP01 OP02 OP05 OP06        /* > < <= >= */

 139: %left    OP10 OP11                  /* + - */

 140: %left    OP12 OP13                  /* * / */

 141: %right    UNARY                     /* unary operation */

 142: %left    SMALLPL_T SMALLPR_T        /* () */

 143: %nonassoc IFX                   /* if statement */

 144: %nonassoc ELSE_T                /* if-else statement */

 145:  

 146:  

 147: %start        Program                // Start symbol is Program

 148:  

 149:  

 150: %%

 151:  

 152:  

 153: Program : MainClass EClassDeclaration                                     {

 154:                                                                             Program_SymbolTable->set_key();

 155:                                                                             PA = new Program($1, $2);

 156:                                                                             /* Make the program object */

 157:                                                                         }

 158:     ;

 159:     

 160: MainClass : CLASS IDENT MIDPL_T PUBLIC_T STATIC_T VOID MAIN_T SMALLPL_T STRING BIGPL_T BIGPR_T IDENT SMALLPR_T MIDPL_T EStatement MIDPR_T MIDPR_T    {

 161:                                                                                                                                                         // Make the SymbolTableEntry from argument

 162:                                                                                                                                                         SymbolTableEntry* STE1 = new SymbolTableEntry($12, 2, NULL, NULL, 1);

 163:                                                                                                                                                         // Make the SymbolTableEntry from mainclass

 164:                                                                                                                                                           Program_SymbolTable->append(STE1);

 165:                                                                                                                                                           SymbolTableEntry* STE2 = new SymbolTableEntry($2, 6, NULL, NULL, 0);

 166:                                                                                                                                                           Program_SymbolTable->append(STE2);

 167:                                                                                                                                                           // Set the classname

 168:                                                                                                                                                           Program_SymbolTable->set_classname($2, SymbolTable::class_start_point);

 169:                                                                                                                                                           // Set the class_start_point to next class

 170:                                                                                                                                                           SymbolTable::class_start_point = Program_SymbolTable->size();

 171:                                                                                                                                                           $$ = new MainClass($2, $12, $15);

 172:                                                                                                                                                           }

 173:     ;

 174:     

 175: ClassDeclaration : CLASS IDENT MIDPL_T EFMDeclaration MIDPR_T            {

 176:                                                                             // Make the SymbolTableEntry from class

 177:                                                                             SymbolTableEntry*  STE = new SymbolTableEntry($2, 5, NULL, NULL, 0);

 178:                                                                             Program_SymbolTable->append(STE);

 179:                                                                             Program_SymbolTable->set_classname($2, SymbolTable::class_start_point);

 180:                                                                             SymbolTable::class_start_point = Program_SymbolTable->size();

 181:                                                                             $$ = new ClassDeclSimple($2, $4);

 182:                                                                         }            /* no extends */

 183:     | CLASS IDENT EXTENDS IDENT MIDPL_T EFMDeclaration MIDPR_T            {

 184:                                                                             // Make the SymbolTableEntry from class

 185:                                                                             SymbolTableEntry* STE = new SymbolTableEntry($2, 5, NULL, NULL, 0);

 186:                                                                             Program_SymbolTable->append(STE);

 187:                                                                             Program_SymbolTable->set_classname($2, SymbolTable::class_start_point);

 188:                                                                             SymbolTable::class_start_point = Program_SymbolTable->size();

 189:                                                                             $$ = new ClassDeclExtends($2, $4, $6);

 190:                                                                         }        /* extends */

 191:     ;

 192:     

 193: EClassDeclaration : ClassDeclaration EClassDeclaration                    {

 194:                                                                             // make new ClassDeclList object

 195:                                                                             ClassDeclList* temp = new ClassDeclList();

 196:                                                                             // append ClassDeclaration

 197:                                                                             temp->append($1);

 198:                                                                             // append other ClassDeclaration

 199:                                                                             int size = $2->size();

 200:                                                                             for(int i = 0 ; i < size ; i++)

 201:                                                                             {

 202:                                                                                 temp->append($2->elementAt(i));

 203:                                                                             }

 204:                                                                             $$ = temp;

 205:                                                                         }

 206:     | /* empty string */                                                { $$ = new ClassDeclList(); // empty string, so return empty object

 207:                                                                         }

 208:     ; 

 209:     

 210: FMDeclaration : FieldDeclaration                                        { $$ = $1; // I can remove this rule, but for convenience remain this rule.

 211:                                                                         }

 212:     | MethodDeclaration                                                    { $$ = $1; }

 213:     ;

 214:     

 215: EFMDeclaration : FMDeclaration EFMDeclaration                            {

 216:                                                                             // make new MemberDeclList object

 217:                                                                             MemberDeclList* temp = new MemberDeclList();

 218:                                                                             // append FMDeclaration

 219:                                                                             temp->append($1);

 220:                                                                             // append other FMDeclaration

 221:                                                                             int size = $2->size();

 222:                                                                             for(int i = 0 ; i < size ; i++)

 223:                                                                             {

 224:                                                                                 temp->append($2->elementAt(i));

 225:                                                                             }

 226:                                                                             $$ = temp;

 227:                                                                         }

 228:     | /* empty string */                                                { $$ = new MemberDeclList(); // empty string, so return empty object

 229:                                                                         }

 230:     ;

 231:     

 232: FieldDeclaration : Modifier Type IDENT SEMICOL_T                        {

 233:                                                                             // There is a id to write on the symboltable, so do it.

 234:                                                                             SymbolTableEntry* STE = new SymbolTableEntry($3, 7, $1, $2);

 235:                                                                             Program_SymbolTable->append(STE);

 236:                                                                             $$ = new FieldDecl($1, $2, $3);

 237:                                                                         }

 238:     ;

 239:     

 240: MethodDeclaration : Modifier Type IDENT SMALLPL_T ParameterList SMALLPR_T MIDPL_T EStatement RETURN_T Expression SEMICOL_T MIDPR_T     {

 241:                                                                                                                                         // There is a id to write on the symboltable, so do it.

 242:                                                                                                                                         SymbolTableEntry* STE = new SymbolTableEntry($3, 1, $1, $2);

 243:                                                                                                                                         Program_SymbolTable->append(STE);

 244:                                                                                                                                         $$ = new MethodDeclReturn($1, $2, $3, $5, $8, $10);

 245:                                                                                                                                     }    /* Type */

 246:     | Modifier VOID IDENT SMALLPL_T ParameterList SMALLPR_T MIDPL_T EStatement MIDPR_T     {

 247:                                                                                             // There is a id to write on the symboltable, so do it.

 248:                                                                                             SymbolTableEntry* STE = new SymbolTableEntry($3, 1, $1, NULL);

 249:                                                                                             Program_SymbolTable->append(STE);

 250:                                                                                             $$ = new MethodDeclVoid($1, $3, $5, $8);

 251:                                                                                         }    /* void */

 252:     ;

 253:     

 254: Modifier : PUBLIC_T                                                        {

 255:                                                                             ModifierList* temp_list = new ModifierList();

 256:                                                                             Public* temp1 = new Public();

 257:                                                                             temp_list->append(temp1);

 258:                                                                             $$ = temp_list;

 259:                                                                         }

 260:     | PUBLIC_T STATIC_T                                                    { 

 261:                                                                             ModifierList* temp_list = new ModifierList();

 262:                                                                             Public* temp1 = new Public();

 263:                                                                             temp_list->append(temp1);

 264:                                                                             Static* temp2 = new Static();

 265:                                                                             temp_list->append(temp2);

 266:                                                                             $$ = temp_list;

 267:                                                                         }

 268:     | PRIVATE_T                                                            {

 269:                                                                             ModifierList* temp_list = new ModifierList();

 270:                                                                             Private* temp1 = new Private();

 271:                                                                             temp_list->append(temp1);

 272:                                                                             $$ = temp_list;

 273:                                                                         }

 274:     | PRIVATE_T STATIC_T                                                { 

 275:                                                                             ModifierList* temp_list = new ModifierList();

 276:                                                                             Private* temp1 = new Private();

 277:                                                                             temp_list->append(temp1);

 278:                                                                             Static* temp2 = new Static();

 279:                                                                             temp_list->append(temp2);

 280:                                                                             $$ = temp_list;

 281:                                                                         }

 282:     | STATIC_T                                                            {

 283:                                                                             ModifierList* temp_list = new ModifierList();

 284:                                                                             Static* temp1 = new Static();

 285:                                                                             temp_list->append(temp1);

 286:                                                                             $$ = temp_list;

 287:                                                                         }

 288:     | /* empty string */                                                { $$ = NULL; }

 289:     ;

 290:     

 291: Type : INT_T                                                            { $$ = new IntType(); }

 292:     | BOOLEAN_T                                                            { $$ = new BooleanType(); }

 293:     | INT_T BIGPL_T BIGPR_T                                                { $$ = new IntArrayType(); }

 294:     | IDENT                                                                { $$ = new IdentifierType($1); }

 295:     ;

 296:     

 297: ParameterList : Type IDENT ParameterList                                {

 298:                                                                             // ParamList is also list, so make new thing and attach remaining thing.

 299:                                                                             ParamList* temp = new ParamList();

 300:                                                                             Param* temp_param = new Param($1, $2);

 301:                                                                             temp->append(temp_param);

 302:                                                                             /* attach the ArgExp to ArgList */

 303:                                                                             if(NULL != $3)

 304:                                                                             {

 305:                                                                                 int size = $3->size();

 306:                                                                                 for(int i = 0 ; i < size ; i++)

 307:                                                                                 {

 308:                                                                                     temp->append($3->elementAt(i));

 309:                                                                                 }

 310:                                                                             }

 311:                                                                             // There is a id to write on the symboltable, so do it.

 312:                                                                             SymbolTableEntry* STE = new SymbolTableEntry($2, 2, NULL, $1);

 313:                                                                             Program_SymbolTable->append(STE);

 314:                                                                             $$ = temp;

 315:                                                                         }

 316:     | COMMA_T Type IDENT ParameterList                                    {

 317:                                                                             // This is the expand things.

 318:                                                                             ParamList* temp = new ParamList();

 319:                                                                             Param* temp_param = new Param($2, $3);

 320:                                                                             temp->append(temp_param);

 321:                                                                             /* attach the ArgExp to ArgList */

 322:                                                                             if(NULL != $4)

 323:                                                                             {

 324:                                                                                 int size = $4->size();

 325:                                                                                 for(int i = 0 ; i < size ; i++)

 326:                                                                                 {

 327:                                                                                     temp->append($4->elementAt(i));

 328:                                                                                 }

 329:                                                                             }

 330:                                                                             // There is a id to write on the symboltable, so do it.

 331:                                                                             SymbolTableEntry* STE = new SymbolTableEntry($3, 2, NULL, $2);

 332:                                                                             Program_SymbolTable->append(STE);

 333:                                                                             $$ = temp;

 334:                                                                         }

 335:     | /* empty string */                                                {

 336:                                                                             $$ = NULL; // if it is empty, then return NULL.

 337:                                                                                         // Then PrettyPrinterVisitor know that there is no parameter.

 338:                                                                         }

 339:     ;

 340:     

 341: Ref : THIS_T RefExtra                                                    {

 342:                                                                             // first thing is 'this'

 343:                                                                             This* temp_this = new This();

 344:                                                                             // I don't know how to represent (.id)*, So just deal with string.

 345:                                                                             // So if RefExtra's string is null string(length is 0), it means just this.

 346:                                                                             if(0 < strlen($2->string))

 347:                                                                             {

 348:                                                                                 /* (.id)* */

 349:                                                                                 $$ = new MemRef(temp_this, $2);

 350:                                                                             }

 351:                                                                             else

 352:                                                                             {

 353:                                                                                 /* alone */

 354:                                                                                 $$ = temp_this;

 355:                                                                             }

 356:                                                                         }

 357:     | IDENT RefExtra                                                    {

 358:                                                                             // first thing is 'id'

 359:                                                                             IdentifierRef* temp_idref = new IdentifierRef($1);

 360:                                                                             // I don't know how to represent (.id)*, So just deal with string.

 361:                                                                             // So if RefExtra's string is null string(length is 0), it means just this.

 362:                                                                             if(0 < strlen($2->string))

 363:                                                                             {

 364:                                                                                 /* (.id)* */

 365:                                                                                 $$ = new MemRef(temp_idref, $2);

 366:                                                                             }

 367:                                                                             else

 368:                                                                             {

 369:                                                                                 /* alone */

 370:                                                                                 $$ = temp_idref;

 371:                                                                             }

 372:                                                                         }

 373:     ;

 374:     

 375: RefExtra : DOT_T IDENT RefExtra                                            {

 376:                                                                             /* I don't know how to deal this exactly.

 377:                                                                                 So just deal with string. */

 378:                                                                             char* temp_str = new char[64];

 379:                                                                             strcpy(temp_str, $2->string);

 380:                                                                             if(0 < strlen($3->string))

 381:                                                                             {

 382:                                                                                 strcat(temp_str, ".");

 383:                                                                                 strcat(temp_str, $3->string);

 384:                                                                             }

 385:                                                                             $$ = new Identifier(temp_str);

 386:                                                                         }

 387:     | /* empty string */                                                {

 388:                                                                             // I deal the Ref to string. so use empty string.

 389:                                                                             $$ = new Identifier(empty_string);

 390:                                                                         }

 391:     ;

 392:     

 393: ArgList : Expression ArgExp                                                {

 394:                                                                             // ArgList is list, so make new object, attach between new thing and ArgExp.

 395:                                                                             ArgList* temp = new ArgList();

 396:                                                                             temp->append($1);

 397:                                                                             /* attach the ArgExp to ArgList */

 398:                                                                             if(NULL != $2)

 399:                                                                             {

 400:                                                                                 int size = $2->size();

 401:                                                                                 for(int i = 0 ; i < size ; i++)

 402:                                                                                 {

 403:                                                                                     temp->append($2->elementAt(i));

 404:                                                                                 }

 405:                                                                             }

 406:                                                                             $$ = temp;

 407:                                                                         }

 408:     | /* empty string */                                                {

 409:                                                                             $$ = NULL;

 410:                                                                         }

 411:     ;

 412:     

 413: ArgExp : COMMA_T Expression ArgExp                                        {

 414:                                                                             // ArgList is list, so make new object, attach between new thing and ArgExp.

 415:                                                                             ArgList* temp = new ArgList();

 416:                                                                             temp->append($2);

 417:                                                                             /* attach the ArgExp to ArgList */

 418:                                                                             if(NULL != $3)

 419:                                                                             {

 420:                                                                                 int size = $3->size();

 421:                                                                                 for(int i = 0 ; i < size ; i++)

 422:                                                                                 {

 423:                                                                                     temp->append($3->elementAt(i));

 424:                                                                                 }

 425:                                                                             }

 426:                                                                             $$ = temp;

 427:                                                                         }

 428:     | /* empty string */                                                {

 429:                                                                             $$ = NULL;

 430:                                                                         }

 431:     ;

 432:     

 433: Statement : MIDPL_T EStatement MIDPR_T                                    { $$ = new StatementBlock($2); }

 434:     | Type IDENT SEMICOL_T                                                {

 435:                                                                             // There is a id to write on the symboltable, so do it.

 436:                                                                             SymbolTableEntry* STE = new SymbolTableEntry($2, 3, NULL, $1);

 437:                                                                             Program_SymbolTable->append(STE);

 438:                                                                             $$ = new LocalVarDecl($1, $2, NULL);

 439:                                                                         }

 440:     | Type IDENT EQU_T Expression SEMICOL_T                                {

 441:                                                                             // There is a id to write on the symboltable, so do it.

 442:                                                                             SymbolTableEntry* STE = new SymbolTableEntry($2, 3, NULL, $1);

 443:                                                                             Program_SymbolTable->append(STE);

 444:                                                                             $$ = new LocalVarDecl($1, $2, $4);

 445:                                                                         }

 446:     | Ref EQU_T Expression SEMICOL_T                                    { $$ = new Assign($1, $3); }

 447:     | Ref BIGPL_T Expression BIGPR_T EQU_T Expression SEMICOL_T            { $$ = new ArrayAssign($1, $3, $6); }

 448:     | Ref SMALLPL_T ArgList SMALLPR_T SEMICOL_T                            { $$ = new InvokeStatement($1, $3); }

 449:     | IF_T SMALLPL_T Expression SMALLPR_T Statement    %prec IFX            { 

 450:                                                                             // I set %prec IFX. and use prec I remove the ambiguity.

 451:                                                                             $$ = new If($3, $5, NULL);

 452:                                                                         }

 453:     | IF_T SMALLPL_T Expression SMALLPR_T Statement ELSE_T Statement    {

 454:                                                                             // I set %prec IFX. and use prec I remove the ambiguity.

 455:                                                                             $$ = new If($3, $5, $7);

 456:                                                                         }

 457:     | WHILE_T SMALLPL_T Expression SMALLPR_T Statement                    { $$ = new While($3, $5); }

 458:     | PRINTLN_T SMALLPL_T Expression SMALLPR_T SEMICOL_T                { $$ = new Print($3); }

 459:     ;

 460:  

 461: EStatement : Statement EStatement                                        {

 462:                                                                             StatementList* temp = new StatementList();

 463:                                                                             temp->append($1);

 464:                                                                             int size = $2->size();

 465:                                                                             for(int i = 0 ; i < size ; i++)

 466:                                                                             {

 467:                                                                                 temp->append($2->elementAt(i));

 468:                                                                             }

 469:                                                                             $$ = temp;

 470:                                                                         }

 471:     | /* empty string */                                                { $$ = new StatementList(); }

 472:     ;

 473: Expression : Ref                                                        { $$ = new RefExpr($1); }

 474:     | UNOP Expression %prec UNARY                                        {

 475:                                                                             // UNARY operation is higher precedence than BINAY operation

 476:                                                                             // So write %prec

 477:                                                                             switch ($1)

 478:                                                                             {

 479:                                                                                 case 1:

 480:                                                                                     /* ! */

 481:                                                                                     $$ = new LogNeg($2);

 482:                                                                                     break;

 483:                                                                                 case 2:

 484:                                                                                     /* - */

 485:                                                                                     $$ = new ArithNeg($2);

 486:                                                                                     break;

 487:                                                                                 default:

 488:                                                                                     yyerror("Expression UNOP switch error!! ");

 489:                                                                                     break;

 490:                                                                             }

 491:                                                                         }

 492:     | Expression OP01 Expression                                        { $$ = new GreaterThan($1, $3); }

 493:     | Expression OP02 Expression                                        { $$ = new LessThan($1, $3); }

 494:     | Expression OP04 Expression                                        { $$ = new Equal($1, $3); }

 495:     | Expression OP05 Expression                                        { $$ = new LessEqual($1, $3); }

 496:     | Expression OP06 Expression                                        { $$ = new GreaterEqual($1, $3); }

 497:     | Expression OP07 Expression                                        { $$ = new NotEqual($1, $3); }

 498:     | Expression OP08 Expression                                        { $$ = new LogAnd($1, $3); }

 499:     | Expression OP09 Expression                                        { $$ = new LogOr($1, $3); }

 500:     | Expression OP10 Expression                                        { $$ = new Add($1, $3); }

 501:     | Expression OP11 Expression                                        { $$ = new Sub($1, $3); }

 502:     | Expression OP12 Expression                                        { $$ = new Mult($1, $3); }

 503:     | Expression OP13 Expression                                        { $$ = new Div($1, $3); }

 504:     | Ref BIGPL_T Expression BIGPR_T                                    { $$ = new ArrayLookup($1, $3); }

 505:     | Ref SMALLPL_T ArgList SMALLPR_T                                    { $$ = new InvokeExpr($1, $3); }

 506:     | SMALLPL_T Expression SMALLPR_T                                    { $$ = $2; }

 507:     | NUMBER                                                            { $$ = new Num($1); }

 508:     | TRUE_T                                                            { $$ = new True(); }

 509:     | FALSE_T                                                            { $$ = new False(); }

 510:     | NULL_T                                                            { $$ = new Null(); }

 511:     | NEW_T IDENT SMALLPL_T SMALLPR_T                                    {

 512:                                                                             // There is a id to write on the symboltable, so do it.

 513:                                                                             SymbolTableEntry* STE = new SymbolTableEntry($2, 4, NULL, NULL);

 514:                                                                             Program_SymbolTable->append(STE);

 515:                                                                             $$ = new NewObject($2);

 516:                                                                         }

 517:     | NEW_T INT_T BIGPL_T Expression BIGPR_T                            { $$ = new NewArray($4); }

 518:     ;

 519:  

 520: UNOP : OP03                                                                { $$ = 1; }

 521:     | OP11                                                                 { $$ = 2; }

 522:     ;

 523:  

 524: %%

 525:  

 526: int main(int argc, char* argv[])

 527: {

 528:     char* fn = new char[64];                                                // Make temporary string variable

 529:     

 530:     strcpy(empty_string, "");                                                // define empty string

 531:     strcpy(java_filename, argv[1]);                                            // save the java filename

 532:     

 533:     cout << "Start Scanning and Parsing the " << java_filename << endl;        // print the program status

 534:       yyin = fopen(argv[1], "r");                                                // open the java source file

 535:     yyparse();                                                                // do parsing

 536:     fclose(yyin);                                                            // close the java source file

 537:     

 538:     

 539:     /* print_ptree(ptree); */

 540:     cout << "Write the AST to the " << java_filename << ".ast" << endl;        // print the program status

 541:     strcpy(fn, java_filename);                                                // make the filename to write the AST

 542:     strcat(fn, ".ast");                                                        // make the filename to write the AST

 543:     fout.open(fn);                                                            // open the AST file

 544:     

 545:     PrettyPrintVisitor PPV;                                                    // define PPV to write the AST

 546:     PPV.visit(PA);                                                            // write the AST

 547:     

 548:     fout.close();                                                            // close the AST file

 549:     

 550:     

 551:     /* print symbol table */

 552:     cout << "Write the SymbolTable to the " << java_filename << ".syt" << endl;    // print the program status

 553:     strcpy(fn, java_filename);                                                // make the filename to write the SymbolTable

 554:     strcat(fn, ".syt");                                                        // make the filename to write the SymbolTable

 555:     fout.open(fn);                                                            // open the SymbolTable file

 556:     

 557:     Program_SymbolTable->print();                                            // write the SymbolTable to the file

 558:     

 559:     fout.close();                                                            // close the SymbolTable file

 560:     

 561:     

 562:     cout << "End the program " << endl;                                        // print the program status

 563:     

 564:     return 0;                                                                // return to the OS

 565: }

 566:  

 567: void yyerror(const char *s)

 568: {

 569:     fprintf(stderr, "%s\n", s);                                                // print error message

 570: }

 571:  

 572:
