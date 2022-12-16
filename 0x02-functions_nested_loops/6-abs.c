#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: any integer input
 *
 * Description computes the absolute value of an integer; returns `0` for zero
 *
 * Return: absolute value of integer input
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else if (i == 0)
		return (0);
	else
		return (i);
}
