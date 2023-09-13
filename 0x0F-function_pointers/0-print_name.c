#include "main.h"
/**
 * print_name - prints name
 * @name: the name to be printed
 * @f: a pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
