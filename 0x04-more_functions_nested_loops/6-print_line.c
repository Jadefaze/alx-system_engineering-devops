#include "main.h"

/**
 * print_line - to print a straight line
 *
 * @n: takes in the length of the line
 * Return: nothng
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
