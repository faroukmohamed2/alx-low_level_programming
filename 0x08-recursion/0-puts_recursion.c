#include "main.h"
/**
 * _puts_recursion - to print string by recursion
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
