#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 *
 * Description: prints all possible combinations of three digits. Numbers are
 * separated by `,`, followed by a space. The three digits must be different.
 * `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination
 * of the three digits `0`, `1`, and `2`. Print only the smallest combination
 * of the three digits. Numbers should be printed in ascending order. Only use
 * `puthar` six times maximum. You are not allowed to use any variable of type
 * `char`
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			k = 2;

			while (k <= 9)
			{
				if (k > j && j > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
