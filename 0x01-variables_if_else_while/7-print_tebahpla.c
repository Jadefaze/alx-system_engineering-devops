#include <stdio.h>

/**
 * main - entry point
 * Description: to print z-a
 *
 * Return: 0 Always
 */

int main(void)
{
	char alpha_char;

	alpha_char = 122;
	while (alpha_char >= 97)
	{
		putchar(alpha_char);
		alpha_char--;
	}
	putchar('\n');

	return (0);
}
