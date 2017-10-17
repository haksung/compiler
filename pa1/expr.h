#ifndef EXPR_H
#define EXPR_H

typedef enum {eInt, eFloat, eNone} Num_e;
typedef enum {ePlus, eMinus} Addi_e;
typedef enum {eMult, eDiv} Mult_e;

struct EXPR {
	struct ADDITIVE *addi;
};

struct ADDITIVE {
	Addi_e type;
	struct ADDITIVE *lhs;
	struct ADDITIVE *rhs;
	struct MULTIPLICATIVE *multi;
};

struct MULTIPLICATIVE {
	Mult_e type;
	struct MULTIPLICATIVE *lhs;
	struct MULTIPLICATIVE *rhs;
	Num_e numType;
	union {
		int intnum;
		float floatnum;
	} num;
};

#endif
