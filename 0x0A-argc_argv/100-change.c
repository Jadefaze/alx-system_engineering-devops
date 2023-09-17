#include <stdio.h>
#include <stdlib.h>
/**
 * main - to check for number of coin change
 * @argc: num of args passed
 * @argv: array of strings (args)
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, rem, change, new_change, num;
	int coins[5] = {25, 10, 5, 2, 1};

	rem = change = new_change = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		if (num >= coins[i] || new_change >= coins[i])
		{
			if (new_change)
				num = new_change;
			change += num / coins[i];
			rem = num % coins[i];
			if (rem != 0)
				new_change = rem;
			else
			{
				printf("%d\n", change);
				return (0);
			}
		}
	}
	printf("%d\n", 0);
	return (0);
}
