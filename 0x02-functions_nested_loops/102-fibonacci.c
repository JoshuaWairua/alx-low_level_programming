#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Description: prints the first 50 Fibonacci numbers, starting with `1` and
 * `2`, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long sum;

	while (i < 50)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
		i++;
	}

	return (0);
}
