#include "3-calc.h"

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
	int result = 0, num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (op == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}


	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);

	return (0);


}
