#include "main.h"

/**
 * print_square - prints a square
 * @size: input size of the square
 *
 * Description: prints a square, followed by a new line. Where @size is the
 * size of the square. If @size is `0` or less, the funnction should print a
 * new line only. Uses the character `#` to print the square
 * Return: nothing
 */
void print_square(int size)
{
	int line = 0;
	int spot;

	if (size > 0)
	{
		while (line < size)
		{
			spot = 0;

			while (spot < size)
			{
				_putchar('#');
				spot++;
			}
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
