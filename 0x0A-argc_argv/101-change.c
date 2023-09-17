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
	int rem, change, new_change, num;

	rem = 0;
	change = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	new_change = 0;
	if (num >= 25)
	{
		change += num / 25;
		rem = num % 25;
		if (rem != 0)
			new_change = rem;
		else
		{
			printf("%d\n", change);
			return (0);
		}
	}
	if (num >= 10 || new_change >= 10)
	{
		if (new_change)
			num = new_change;
		change += num /10;
		rem = num  % 10;
		if (rem != 0)
			new_change = rem;
		else
                {
                        printf("%d\n", change);
                        return (0);
                }
	}
	if (num >= 5 || new_change >= 5)
	{
		if (new_change)
			num = new_change;
		change += num / 5;
		rem = num % 5;
		if (rem != 0)
			new_change = rem;
	       	else
                {
                        printf("%d\n", change);
                        return (0);
                }

	}
	if (num >= 2 || new_change >= 2)
        {
                if (new_change)
                        num = new_change;
                change += num / 2;
                rem = num % 2;
                if (rem != 0)
                        new_change = rem;
		else
                {
                        printf("%d\n", change);
                        return (0);
                }
        }
	if (num == 1 || new_change == 1)
        {
                if (new_change)
                        num = new_change;
                change += num;
        }

	printf("%d\n", change);
	return (0);
}	
