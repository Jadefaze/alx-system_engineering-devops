#include <stdio.h>
#include <stdlib.h>

/**
 * main - to compute number of coins in change of 25, 10, 5, 2, 1
 * @argc: a count of args passed
 * @argv: an array of args passed
 * Return: 0 or 1 if argc > 2
 */

int main(int argc, char *argv[])
{
	int i, coins_bal, money;
	char coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	money = atoi(argv[1]);
	coins_bal = 0;
	for (i = 0; i < 5; i++)
	{
		if (money >= coins[i])
		{
			coins_bal += money / coins[i];
			money = money % coins[i];
		}
	}

	printf("%d\n", coins_bal);
	return (0);
}
