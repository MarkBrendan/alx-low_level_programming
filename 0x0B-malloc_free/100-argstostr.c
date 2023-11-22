#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - Write a function that concatenates
 * all the arguments of your program.
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, l, j, k, len = 0;
	int str = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	len += 1;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (l = 0; l < ac; l++)
	{
		for (k = 0; av[l][k] != '\0'; k++)
		{
			ptr[str] = av[l][k];
			str++;
		}
		ptr[str] = ('\n');
		str++;
	}
	ptr[str - 1] = '\0';
	return (ptr);

}
