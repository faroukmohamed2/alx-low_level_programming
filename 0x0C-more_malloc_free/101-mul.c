#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>
/**
 * main - printsmultiplacation of two numbers
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
