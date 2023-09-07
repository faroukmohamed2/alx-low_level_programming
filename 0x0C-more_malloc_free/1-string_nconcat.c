#include "main.h"
/**
 * string_nconcat - contact two string
 * @s1: the first string
 * @s2: the second string
 * @n: the alloowed bytes
 * Return: pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0';)
		i++;
	for (j = 0; *(s2 + j) != '\0';)
		j++;
	ptr = malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(ptr + i) = *(s1 + i);
	}
	for (j = 0; j < n; j++)
	{
		*(ptr + (i + j)) = *(s2 + j);
	}
	return (ptr);
}
