#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: input size
 *
 * Description: prints a triangle, using the character `#`. Where @size is the
 * size of the triangle. If @size is `0` or less, the function should print
 * only a new line. Only use `_putchar`
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i = 1;
	int j;

	if (size > 0)
	{
		while (i <= size)
		{
			j = size - i;

			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			j = 0;

			while (j < i)
			{
				_putchar('#');
				j++;
			}
			if (i == size)
				continue;

			_putchar('\n');
			i++;
		}
	}

	_putchar('\n');
}
