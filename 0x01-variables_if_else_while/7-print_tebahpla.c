#include <stdio.h>

/**
 * main - Prints reversed alphabet.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int z;

	for (z = 122; z > 96; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
