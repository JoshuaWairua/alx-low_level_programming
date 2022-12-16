#include <stdio.h>

/**
 * main - prints Fizz Buzz numbers
 *
 * Description: program prints the numbers `1` to `100`, followed by a new line
 * but for multiples of 3, print `Fizz` instead of the number
 * and for the multipes of 5 print `Buzz`
 * for numbers which are multiples of  both 3 and 5, print `FizzBuzz`
 * Return: Always 0.
 */
int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
		i++;
	}
	return (0);
}
