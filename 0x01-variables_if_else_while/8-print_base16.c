#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char lowr_af;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (lowr_af = 'a'; lowr_af <= 'f'; lowr_af++)
		putchar(lowr_af);
	putchar('\n');

	return (0);
}
