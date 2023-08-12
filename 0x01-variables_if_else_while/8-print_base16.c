#include <stdio.h>

/**
 * main - entry point
 * Description: to print 0-f
 *
 * Return: 0 Always
 */

int main(void)
{
	int num;
	int num2;

	num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	num2 = 97;

	while (num2 <= 102)
	{
		putchar(num2);
		num2++;
	}

	putchar('\n');

	return (0);
}
