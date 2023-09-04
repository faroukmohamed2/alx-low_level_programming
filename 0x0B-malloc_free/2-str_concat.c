#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - contact two strings
 * @s1: th first string
 * @s2: the second string
 * Return: the contacted string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *ptr;

	if (s1 == NULL && s2 == NULL)
		return ("");
	if (s1 != NULL || s2 == NULL)
	{
	for (i = 0; *(s1 + i) != '\0';)
	{
		i++;
	}
	}
	if (s2 != NULL || s1 == NULL)
	{
	for (j = 0; *(s2 + j) != '\0';)
	{
		j++;
	}
	}
	ptr = (char *)malloc(i + j + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (s1 != NULL || s2 == NULL)
	{
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	}
	if (s2 != NULL || s1 == NULL)
	{
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(ptr + (i + j)) = *(s2 + j);
	}
	}
	return (ptr);
}
