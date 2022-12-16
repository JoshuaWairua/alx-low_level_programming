#include "main.h"

/**
 * main - prints the word `_putchar`
 *
 * Description: it prints the word `_putchar`
 *
 * Return: 0 (success)
 */
int main(void)
{
	char stringie[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(stringie[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
