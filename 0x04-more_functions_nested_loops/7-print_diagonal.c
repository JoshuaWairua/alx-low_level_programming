#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: input number
 *
 * Description: draws a diagonal line on th terminal, where @n is rge number of
 * times the character `\` should be printed. The diagonal should end with a
 * new line. If @n is `0` or less, the function should print a new line only
 * Return: nothing
 */
void print_diagonal(int n)
{
	int line = 1;
	int spot;

	if (n > 0)
	{
		while (line <= n)
		{
			spot = 1;

			while (spot <= line)
			{
				_putchar(' ');
				spot++;
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
