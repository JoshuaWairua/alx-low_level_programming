#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table, staring iwth 0
 * Return: nothing
 */
void times_table(void)
{
	int i = 0;
	int j;
	int n;

	while (i < 10)
	{
		j = 0;

		while (j < 10)
		{
			n = i * j;

			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			if (j == 9)
				_putchar('\n');
			_putchar(',');
			_putchar(' ');
			j++;
		}
		i++;
	}
}
