#include "main.h"

/**
 * puts2 - to print string chars one by one
 * @str: the string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
