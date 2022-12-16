#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Description: prints the numbers from `0` to `9`, followed by a new line
 * Return: nothing
 */
void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
