#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication of 2 integers
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
