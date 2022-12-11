#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int z;

	for (z = 48; z < 58; z++)
	{
		putchar(z);
	}
	for (z = 97; z < 103; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
