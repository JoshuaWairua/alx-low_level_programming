#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Description: prints alphabet in lowercase, followed by a new line
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
