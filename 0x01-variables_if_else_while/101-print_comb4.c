#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int z, f, c;

	z = 48;
	f = 48;
	c= 48;

	while (f < 58)
	{
		z = 28;
		while (z < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (f != z && f != c && z != c && f < z && z < c)
				{
					putchar(f);
					putchar(z);
					putchar(c);
					if (z == 56 && f == 55 && c == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			z++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}


