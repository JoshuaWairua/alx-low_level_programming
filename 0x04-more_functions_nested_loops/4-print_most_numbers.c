#include "main.h"

/**
 * print_most_numbers - prints numbers
 *
 * Description: prints the numbers `0` to `9`, excluding `2` and `4`, followed
 * by a new line
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (!(i == 50 || i == 52))
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
