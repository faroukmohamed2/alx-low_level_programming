#include "main.h"
/**
 * _pow_recursion - calculates the power
 * @x: the base
 * @y: the power
 * Return: x to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
