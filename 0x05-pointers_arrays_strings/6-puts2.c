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
		_putchar('\n');
		i++;
	}
}
