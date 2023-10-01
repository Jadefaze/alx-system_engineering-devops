#include "main.h"

/**
 * _pow_recursion - to find a number raised to a power
 * @x: the base
 * @y: the power
 * Return: result of exponiation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
