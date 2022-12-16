#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *
 * Description: prints all possible combinations of two digits. The two digits
 * must be different. Numbers should be printed in ascending order, with two
 * digits. `01` and `10` are considered the same combination of two digits.
 * only use `putchar` five times maximum. We are not allowed to use variable
 * `char`
 * Return: Alwasys 0.
 */
int main(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
