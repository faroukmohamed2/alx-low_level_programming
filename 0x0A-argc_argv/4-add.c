#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add the numbers
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 if true 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, j = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{
		for (; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	if (argc > 1)
		printf("%d\n", sum);
	return (0);
}
