#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 args passed
 * @argc: number of args
 * @argv: vector of cmds passed
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
