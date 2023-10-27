#include "main.h"
/**
 * get_bit - get the bit of the index
 * @n: the number
 * @index: the index
 * Return: the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = n;
	int i = 0, sizz = 0;
	int *num;

	while (n > 0)
	{
		 n = n / 2;
		 sizz++;
	}
	num = malloc(sizeof(int) * (sizz + 1));
	if ((int)index > sizz)
		return (-1);
	for (i = 0; i < sizz; i++)
	{
		*(num + i) = x % 2;
		x = x / 2;
	}
	return (num[index]);
}
