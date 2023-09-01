#include "main.h"

/**
 * puts2 - to print string chars one by one
 * @str: the string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int printFlag;

	printFlag = 1;
	while (*str != '\0')
	{
		if(printFlag)
		{
			_putchar(*str);
		}
		printFlag = !printFlag;
		str++;
	}
	_putchar('\n');
}
