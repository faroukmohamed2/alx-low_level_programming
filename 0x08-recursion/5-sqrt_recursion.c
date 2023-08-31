#include "main.h"
/**
 * _sqrt_recursion - calculates the square root of an integer
 * @n: the int
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n\2);
}
