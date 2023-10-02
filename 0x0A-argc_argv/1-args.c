#include <stdio.h>

/**
 * main - print number of aggs passed
 * @argc: number of args
 * @argv: vector of cmds passed
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
