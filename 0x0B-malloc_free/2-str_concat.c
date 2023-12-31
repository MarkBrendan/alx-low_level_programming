#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Write a function that concatenates two strings
 *
 * @s1: the string to concatenate to
 * @s2: the string to concatenate from
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *prt;
	int i = 0, j = 0;
	int k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	prt = malloc(sizeof(*prt) * i + j + 1);

	if (prt == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
	{
		prt[k] = s1[k];
	}

	for (l = 0; s2[l] != '\0'; l++)
	{
		prt[k + l] = s2[l];
	}
	prt[k + l] = '\0';
	return (prt);
}
