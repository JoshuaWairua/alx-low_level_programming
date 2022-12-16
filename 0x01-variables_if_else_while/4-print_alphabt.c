#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower, lower_e, lower_q;

	lower_e = 'e';
	lower_q = 'q';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != lower_e && lower != lower_q)
			putchar(lower);
	}
	putchar('\n');

	return (0);
}
