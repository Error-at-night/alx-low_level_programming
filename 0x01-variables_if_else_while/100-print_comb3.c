#include <stdio.h>

/**
 * main -Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int z, f;

	z = 48;
	f = 48;

	while (f < 58)
	{
		z = 48;
		while (z < 58)
		{
			if (f != z && f < z)
			{
				putchar(f);
				putchar(z);
				if (z == 57 && f == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			z++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
