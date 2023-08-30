#include "main.h"
/**
 * factorial - calculate the factorial
 * @n: the number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
