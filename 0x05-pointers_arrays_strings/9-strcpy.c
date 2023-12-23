#include "main.h"
#include <string.h>

/**
 * _strcpy - Write a function that copies the string pointed to by src.
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: parameter to a function
 * @src: parameter to the function
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *i;

	i = strcpy(dest, src);

	return (i);
}
