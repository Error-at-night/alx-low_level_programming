#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char al;

	for (al ='a'; al <= 'z'; al++)
		_putchar(al);
	
	_putchar('\n');
}
