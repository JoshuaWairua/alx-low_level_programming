#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer input
 *
 * Description: prints an integer. Only use `_puthar` function to print.
 * Don't use `long`, arrays, pointers, or hardcode special values
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
