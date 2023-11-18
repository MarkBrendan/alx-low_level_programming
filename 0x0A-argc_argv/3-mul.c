#include <stdio.h>
#include <stdlib.h>

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
	int num, num1, result;

	num = atoi(argv[1]);
	num1 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = num * num1;
	printf("%d\n", result);
	return (0);
}
