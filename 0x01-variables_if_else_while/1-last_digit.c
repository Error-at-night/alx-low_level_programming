#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 98;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (98 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, 8);
	}
	else if (98 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, -8);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 0);
	}
	return (0);
}
