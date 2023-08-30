#include "main.h"
/**
 * _puts_recursion - to print string by recursion
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;
	if (s && *(s + i) != '\0')
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
