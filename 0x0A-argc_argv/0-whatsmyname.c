#include <stdio.h>

/**
 * main - to print its name dynamically
 * @argc: number of args passed via cmdline
 * @argv: array of cmds passed
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
