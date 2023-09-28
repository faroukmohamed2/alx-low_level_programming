#include "main.h"
/**
 * _pow - calculates the power
 * @a: the number
 * @b: the power
 * Return: a to power b
 */
unsigned int _pow(int a, int b)
{
	int pow = 1, i;

	for (i = 0; i < b; i++)
	{
		pow = pow * a;
	}
	return (pow);
}
/**
 * binary_to_uint - convert a binary number to unit
 * @b: a pointer to string
 * Return: the convertrd number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);
	for (; *(b + j) != '\0';)
		j++;
	j--;
	for (; *(b + i) != '\0'; i++)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		unit = unit + _pow(2, i) * (*(b + j) - 48);
		j--;
	}
	return (unit);
}
