#include <stdio.h>

/**
 * main - print aggs passed
 * @argc: number of args
 * @argv: vector of cmds passed
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
