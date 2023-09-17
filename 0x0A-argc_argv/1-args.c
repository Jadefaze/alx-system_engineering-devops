#include <stdio.h>

/**
 * main - to print num of args passed
 * @argc: counter to number of args passed
 * @argv: pointer to array of strings (args passed basically)
 * Return: 0;
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
