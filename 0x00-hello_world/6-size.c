#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i;
	char j;
	long int k;
	long long int l;
	float m;
	printf("Size of a char: %c  byte(s)\n", sizeof(j));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu  byte(s)\n", sizeof(k));
	printf("Size of a long long int: %lu  byte(s)\n", sizeof(l));
	printf("Size of a float: %f  byte(s)\n", sizeof(m));
	return (0);
}
