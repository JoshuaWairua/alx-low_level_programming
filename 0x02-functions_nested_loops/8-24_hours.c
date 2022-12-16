#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day of Jack Bauer, starting from 00:
 * 00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int min;
	int hour = 0;

	while (hour <= 23)
	{
		min = 0;

		while (min <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}