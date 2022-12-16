#include <stdio.h>

/**
 * main - computes and prints the sum of multiples of natural numbers
 *
 * Description: computes and prints the sum of all the multiples of natural
 * numbers `3` or `5` below `1024` (excluded), followed by a new line
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;
	int sum = 0;

	while (sum < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
