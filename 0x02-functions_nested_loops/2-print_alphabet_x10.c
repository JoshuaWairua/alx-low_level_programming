#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Description: prints alphabet in lowercase 10 times, followed by a new line
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
