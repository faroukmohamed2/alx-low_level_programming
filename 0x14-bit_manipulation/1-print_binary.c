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
 * print_binary - converts decimal to binary
 * @n: the number
 * Return - the number in binary
 */
void print_binary(unsigned long int n)
{
	int i = 0, k = 0;

	for (i = 20; i >= 0; i--)
	{
		if (n >= _pow(2, i))
		{
			_putchar('1');
			n = n - _pow(2, i);
			k++;
		}
		else if (n == 0)
		{
			_putchar('0');
			break;
		}
		else if (k != 0)
		{
			_putchar('0');
		}
	}
}
