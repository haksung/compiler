all:
	flex cpp.l
	bison -d cpp.y
	gcc lex.yy.c cpp.tab.c print.c -o mini_cpp -lfl -g

clean:
	rm -rf lex.yy.c cpp.tab.c cpp.tab.h mini_cpp ast.txt s_table.txt
