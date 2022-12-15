#include "main.h"

/**
 * _abs - Entry point
 * @n: Compute absolute value of an integer
 * Return: unsigned int
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
