#include <stdio.h>

/**
 * main - prints all possible combinations of two tw0-digit numbers
 *
 * Description: prints all possible combinations of two tw0-digit numbers. The
 * numbers should range from `0` to `99`
 * The two numbers should be separated by a space. All numbers should be
 * printed with two digits (`1` should be printed as `01`. The combination of
 * numbers must be separated by comma, followed by a space. The combination of
 * numbers should be printed in ascending order. `00 01` and `01 00` are
 * considered the same combination of the numbers `0` and `1`. You can only use
 * `putchar` eight times maximum. You are not allowed to use any variable of
 * type `char`
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 100)
	{
		j = 0;

		while (j < 100)
		{
			if (j > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

				if (i != 98)
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
