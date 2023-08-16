#include "main.h"

/**
 * main - Entry point
 *
 * Description: Use of includes
 * Return: 0 Always.
 */

int main(void)
{
	char *chars = "_putchar";
	int i;


	i = 0;
	for (i = 0; i <= 7; i++)
	{
		_putchar(chars[i]);
	}
	_putchar('\n');

	return (0);
}
