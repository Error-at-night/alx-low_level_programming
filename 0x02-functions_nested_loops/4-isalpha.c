#include "main.h"

/**
 * _isalpha - Entry point
 * @c: Checks for alphabetic characters
 * Return: 1 if alphabet otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
