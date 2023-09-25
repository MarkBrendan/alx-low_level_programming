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

	while (*s != '\0' && *s != c)
	{
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}

}
