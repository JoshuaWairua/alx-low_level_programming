#include "main.h"

/**
 * print_times_table - prints the @n times table
 * @n: integer input
 *
 * Description: prints the @n times table, starting with `0`. If @n is greater
 * than `15` or less than `0`, the function shouldn't print anything.
 * Return: nothing.
 */
void print_times_table(int n)
{
	int i = 0;
	int j;
	int res;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 1;

			_putchar('0');
			while (j <= n)
			{
				_putchar(',');
				_putchar(' ');
				res = i * j;
				if (res <= 99 || res <= 9)
					_putchar(' ');
				if (res >= 10 && res <= 99)
				{
					_putchar((res / 10) + '0');
				}
				else if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar((res % 100) + '0');
				}
				_putchar((res % 10) + '0');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
