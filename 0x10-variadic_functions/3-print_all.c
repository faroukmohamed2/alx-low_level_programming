#include "variadic_functions.h"
/**
 * print_all - prints everything
 * @format: the list of type of argments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j, k = 0;
	char *str;
	char arg[] = {'c', 'i', 'f', 's'};
	va_start(list, format);
	while (format[i] && format)
	{
		j = 0;
		while (arg[j])
		{
			if (format[i] == arg[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
		case 'c' :
			printf("%c", va_arg(list, int));
			k = 1;
			break;
		case 'i' :
			printf("%d", va_arg(list, int));
			k = 1;
			break;
		case 'f' :
			printf("%f", va_arg(list, double));
			k = 1;
			break;
		case 's' :
			str = va_arg(list, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			k = 1;
			break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
