#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low_c;

	for (low_c = 'z'; low_c >= 'a'; low_c--)
		putchar(low_c);
	putchar('\n');

	return (0);
}
