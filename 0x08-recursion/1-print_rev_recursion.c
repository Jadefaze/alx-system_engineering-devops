#include "main.h"

/**
 * _print_rev_recursion - to print a string in reverse
 * @s: The string to print
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int size;

	size = 0;
	while (*(s + size) != '\0')
		size++;

	if (!*(s))
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
