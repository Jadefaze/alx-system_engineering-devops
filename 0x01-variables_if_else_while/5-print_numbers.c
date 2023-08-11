#include <stdio.h>

/**
 * main - entry point
 * Description: to print 0-9
 *
 * Return: 0 Always
 */

int main(void)
{
	char num_char;

	num_char = 48;
	while (num_char <= 57)
	{
		putchar(num_char);
		num_char++;
	}
	putchar('\n');

	return (0);
}
