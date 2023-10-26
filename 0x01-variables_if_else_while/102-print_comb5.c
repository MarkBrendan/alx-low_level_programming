#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations
 * of two two-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int num_out = 48;

	while (num_out <= 57)
	{
		int num_in = 48;

		while (num_in <= 56)
		{
			int num_ini = 48;

			while (num_ini  <= 57)
			{
				int num_inin = 49;

				while (num_inin <= 57)
				{
					putchar(num_out);
					putchar(num_in);
					putchar(' ');
					putchar(num_ini);
					putchar(num_inin);

			if (!(num_out == 57 && num_in == 56 && num_ini == 57 && num_inin == 57))
			{
				putchar(',');
				putchar(' ');
			}
			num_inin++;
				}
			num_ini++;
			}
		num_in++;
		}
	num_out++;
	}
	putchar('\n');
	return (0);
}
