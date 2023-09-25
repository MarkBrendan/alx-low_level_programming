#include "main.h"

/**
 * *_strchr - Write a function that locates a character in a string.
 *
 * @s: the address of memory to print
 * @c: first occurrence of the character c
 *
 * Return: Returns a pointer to the memory area.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		s++;
	}
	return (s);

}
