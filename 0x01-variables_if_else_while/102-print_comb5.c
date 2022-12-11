#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int z, f, c, h, op1, op2;

	z = f = c = h = 48;
      	while (h < 58)
	{

		c = 48;
		while (c < 58)
		{

			f = 48;
			while(f < 58)
			{
				z = 48;
				while (z < 58)
				{

					op1 = (h * 10) + c;
					op2 = (f * 10) + z;
					if (op1 < op2)
				{
					putchar(h);
					putchar(c);
					putchar(' ');
					putchar(f);
					putchar(z);
					if (h == 57 && c == 56 && f == 57 && z == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				z++
			}
			f++;
		}
		c++
	}
	h++
}
putchar('\n');
return (0);
}
