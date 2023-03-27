#include "main.h"

/**
 * print_rev - it prints the reverse of a string
 *
 * @s: input variable
 *
 */

void print_rev(char *s)
{
	int len = strlen(s) - 1;

	int j;

	for (j = len; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
