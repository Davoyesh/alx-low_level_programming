#include "main.h"

/**
 * print_alphabet - a function that  print all lower case alphabet
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
