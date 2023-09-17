#include "main.h"

/**
 * _puts_recursion - to print a string
 * @s: The string to print
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
