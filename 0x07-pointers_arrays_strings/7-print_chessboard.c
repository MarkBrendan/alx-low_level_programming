#include "main.h"

/**
 * print_chessboard
 *
* @a: array that point to a
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; a[j][0] != '\0'; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar('\n');
	}
}
