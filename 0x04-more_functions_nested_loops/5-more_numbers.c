#include "main.h"

/**
 * more_numbers - prints numbers ten times
 *
 * Description: prints 10 times the numbers from `0` to `14`, followed by a new
 * line
 * Return: nothing
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
