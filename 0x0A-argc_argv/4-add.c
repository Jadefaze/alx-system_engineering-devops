#include <stdio.h>
#include <stdlib.h>

/**
 * main - to add positive numbers passed
 * @argc: counter to number of args passed
 * @argv: pointer to array of strings (args passed basically)
 * Return: 0 for success, otherwise 1
 */

int main(int argc, char **argv)
{
	int result;
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	result = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
			result += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (-1);
		}
	}
	printf("%d\n", result);

	return (0);
}
