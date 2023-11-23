#include "main.h"

/**
 * *string_nconcat - Write a function that concatenates two strings
 *
 * @s1: the destination string
 * @s2: the source string
 * @n: the n byte to append to s1
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	int j = 0, k = 0, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}

	ptr = malloc(sizeof(*ptr) * j + k + 2);

	if (ptr == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
	{
		ptr[l] = s1[l];
	}
	for (i = 0; i < n; i++)
	{
		ptr[l + i] = s2[i];
	}
	return (ptr);


}
