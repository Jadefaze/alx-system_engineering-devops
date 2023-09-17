#include <stdio.h>

/**
 * main - to print the program name
 * @argc: counter to number of variables passed
 * @argv: pointer to array of strings
 * Return: 0;
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
