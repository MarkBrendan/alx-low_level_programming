#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int z;
	char *i = "FIZZ";
	char *j = "BUZZ";
	char *k = "FIZZBUZZ";

	for (z = 1; z <= 100; z++)
	{
		if (z % 3 == 0 && z % 5 == 0)
		{
			printf("%s ", k);
		}
		else if (z % 3 == 0)
		{
			printf("%s ", i);
		}
		else if (z % 5 == 0)
		{
			printf("%s ", j);
		}
		else
		{
			printf("%d ", z);
		}
	}
	printf("\n");
	return(0);
}
