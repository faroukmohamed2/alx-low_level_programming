#include "function_pointers.h"
/**
 * array_iterator - executes a function on an array
 * @array: the array
 * @action: function pointer
 * @size: the size of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
		for (; i < size; i++)
		{
			action(array[i]);
		}
}
