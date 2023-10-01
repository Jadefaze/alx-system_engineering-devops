#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: the string to print
 * Return: Nothing (void)
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(s);
}
