#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add args passed
 * @argc: number of args
 * @argv: vector of cmds passed
 * Return: 0 else 1 for error
 */

int main(int argc, char *argv[])
{
	int result, i;

	i = 1;
	result = 0;
	while (i < argc)
	{
		if (!(atoi(argv[i])) || atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);

	return (0);
}
