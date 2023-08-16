#include "main.h"

/**
 * print_sign - checks whether lower or not
 *
 * Description: as above
 * @n: character to check
 * Return: 0 Always.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if  (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
