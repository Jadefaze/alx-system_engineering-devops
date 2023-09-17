#include <stdio.h>
#include <stdlib.h>

/**
 * main - to multiply 2 numbers passed
 * @argc: counter to number of args passed
 * @argv: pointer to array of strings (args passed basically)
 * Return: 0 for success, otherwise 1
 */

int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("error\n");
		return (0);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
