#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: the symbol between two strings
 * @n: the number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *st;

	va_start(list, n);
	for (i = 1; i <= n; i++)
	{
		st = va_arg(list, char *);
		if (!st)
			printf("(nil)");
		else
			printf("%s", st);
		if (separator && i < n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
