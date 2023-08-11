#include <stdio.h>
/**
 * main - Entry point
 * Description: will print to stderr
 * Return: 0 always
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", s);
	return (1);
}

