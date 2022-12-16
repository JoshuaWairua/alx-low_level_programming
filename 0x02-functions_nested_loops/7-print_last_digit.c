#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: input integer
 *
 * Description: prints the last digit of a number
 * Return: value of the lasrt digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
