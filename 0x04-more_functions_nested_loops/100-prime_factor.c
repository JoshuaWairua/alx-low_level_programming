#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Description: finds and prints the largest prime factor of the number
 * `612852475143`, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	long n = 612852475143;
	long m;

	while (m < (n / 2))
	{
		if ((n % 2) == 0)
		{
			n /= 2;
			continue;
		}
		for (m = 3; m < (n / 2); m += 2)
		{
			if ((n % m) == 0)
				n /= m;
		}
	}
	printf("%ld\n", n);

	return (0);
}
