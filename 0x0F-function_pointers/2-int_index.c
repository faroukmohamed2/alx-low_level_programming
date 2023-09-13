#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: the size of the array
 * @cmp: a pointer to a function
 * Return: -1 if false the index if true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) == 0)
			{
				j++;
			}
			else
				return (i);
		}
	}
		if (j == size)
			return (-1);
		return (i);
}
