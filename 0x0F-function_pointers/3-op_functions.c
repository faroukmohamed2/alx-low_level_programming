#include "3-calc.h"
/**
 * op_add - add 2 numbers
 * @a: the first number
 * @b: the second number
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: the first number
 * @b: the second number
 * Return: subtrraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: the first number
 * @b: the second number
 * Return: the multiplacation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: the first number
 * @b: the second number
 * Return: the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - get the modulus
 * @a: the first number
 * @b: the second number
 * Return: the modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
