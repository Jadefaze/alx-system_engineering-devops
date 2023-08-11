#include <stdio.h>

/**
 * main - entry point
 * Description: to print a-z
 *
 * Return: 0 Always
 */

int main(void)
{
	char alpha_char;
	char alpha_char2;

	alpha_char = 97;
	alpha_char2 = 65;
	while (alpha_char <= 122)
	{
		putchar(alpha_char);
		alpha_char++;
	}
	while (alpha_char2 <= 90)
	{
		putchar(alpha_char2);
		alpha_char2++;
	}

	putchar('\n');

	return (0);
}
