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
	unsigned int i, j, k, tot;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0';)
		i++;
	for (j = 0; *(s2 + j) != '\0';)
		j++;
	if (n > j)
		n = j;
	tot = i + n;
	ptr = malloc(tot + 1);
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < tot; k++)
	{
		if (k < i)
			*(ptr + k) = *(s1 + k);
		else
			*(ptr + k) = *(s2 + (k - i));
	}
	return (ptr);
}
