#include "main.h"

/**
 * _strspn - Calculates the length
 *
 * @s: takes input
 * @accept: takes the input
 *
 * Return: Always 0 (success)
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	if (s == 0 || accept == 0)
	{
		return n;
	}

	while (*s != '\0' && _strspn(accept, *s) != 0)
	{
		n++;
		s++;
	}

	if (*s != '\0')
	{
		return (unsigned int)(s - s);
	}

	return n;
}
