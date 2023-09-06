#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: the number of arguments
 * @av: the arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (av[i][j] == ' ')
				av[i][j] = '\n';
		}
	}
	ptr = malloc(i * j);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			*(ptr + j) = av[i][j];
	}
	return (ptr);
}
