#include <stdio.h>
#ifndef 3_CAL_H
#define 3_CAL_H
/**
 * struct op - struct op
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_sub(int a, int b);
int (*get_op_func(char *s)(int, int));
#endif /*3_CAL_H*/
