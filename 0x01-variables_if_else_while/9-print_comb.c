#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int z;

	for (z = 48; z < 58; z++)
	{
		putchar(z);
		if (z != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
