#include <stdio.h>
#include <stdlib.h>

/**
 * strin_len - to check the for other symbols
 *
 * @s: array of strings
 *
 * Return: 0
 */
int strin_len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * main - Entry point
 *
 * @argc: arguement counter
 * @argv: arguement vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int results = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (strin_len(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				results += atoi(argv[i]);
			}
		}
		printf("%d\n", results);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
