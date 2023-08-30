#include "main.h"
/**
 * factorial - calculate the factorial
 * @n: the number
 * Return: the factorial
 */
int factorial(int n)
{
	return (n * factorial(n - 1));
}
