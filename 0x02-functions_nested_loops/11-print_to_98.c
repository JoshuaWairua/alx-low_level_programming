#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * @n: input integer to start printing from
 *
 * Description: prints all natural numbers from `n` to 98, followerd by a new
 * line
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", 98);
}
