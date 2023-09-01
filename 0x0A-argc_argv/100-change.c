#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the change
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d", 0);
	}	
	x = atoi(argv[2]) % 25;
	if (atoi(argv[1]) >= 25)
	{
		y = atoi(argv[1]) / 25;
		if (x >= 10)
		{
			y = y + (x / 10);
			x = x % 10;
			if (x >= 5)
			{
				y = y + (x / 5)
				x = x % 5;
				if (x >= 2)
				{
					y = y + (x / 2);
					x = x % 2;
					if (x == 1)
					{
						y = y + 1
					}
				}
			}
		}
		else if(x >= 5)
		{
			y = y + (atoi(argv[1]) / 5);
		}
		else if (x >= 2)
		{
			y = y + (atoi(argv[1]) / 2);
		}
		else
