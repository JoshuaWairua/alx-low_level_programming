#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the input number
 *
 * Description: draws a straight line in the terminal, where @n is the number
 * of times the character `_` should be printed. The line should end with a new
 * line. If @n is `0` or less, the function should only print a new line
 */
void print_line(int n)
{
	int i = 0;

	if (n >= 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
