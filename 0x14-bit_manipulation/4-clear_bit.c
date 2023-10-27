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
 * clear_bit - converts the sekected bit into 1
 * @n: the number
 * @index: the index to be changed
 * Return: 1 if true -1 if false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = *n, y = *n;
	int i = 0, sizz = 0;
	int *num;

	while (x > 0)
	{
		 x = x / 2;
		 sizz++;
	}
	if (y == 0)
	{
		sizz = (int)index;
	}
	num = malloc(sizeof(int) * (sizz + 1));
	for (i = 0; i < sizz; i++)
	{
		*(num + i) = y % 2;
		y = y / 2;
	}
	num[index] = 0;
	*n = 0;
	for (i = 0; i < sizz; i++)
	 *n = *n + *(num + i) * _pow(2 , i);
	if ((int)index > sizz)
		return (-1);
	return (1);
}
