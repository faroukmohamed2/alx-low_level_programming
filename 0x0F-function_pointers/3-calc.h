#ifndef __CALC__H
#define __CALC__H
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
#endif
