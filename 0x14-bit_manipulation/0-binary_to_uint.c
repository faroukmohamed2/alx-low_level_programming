#include "main.h"
/**
 * _pow - calculates the power
 * @x: the number 
 * @y: the power
 * Return: x to power y
 */
unsigned int _pow(unsigned int x, int y)
{
	int i = 1;
	unsigned int c = x;
	for (; i < y; i++)
		x = c * x;
	if (y == 0)
		return (1);
	return (x);
}
/**
 * binary_to_unit - turns binary into decimal
 * @b: a string of 0 / 1
 * Return: the number if true or 0 if false
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, siz = 0;
	unsigned int dec = 0;

	for (; *(b + siz); siz++)
		;
	if (b == NULL)
		return (0);
	for (i = 0; *(b + i); i++)
	{
		if (*(b + i) != '0' && *(b + i) != '1')
		{
			return (0);
		}
		dec = dec + (*(b + i) - '0') * _pow(2, siz - i);
	}
	return (dec / 2);
}

