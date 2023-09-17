#include <stdio.h>

/**
 * main - to print all args passed
 * @argc: counter to number of args passed
 * @argv: pointer to array of strings (args passed basically)
 * Return: 0;
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
