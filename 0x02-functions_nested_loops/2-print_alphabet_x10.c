#include "main.h"

/**
 * _islower - a function that checks for lowercase
 *
 * @c: char is the input of the function
 *
 * Return: Always 0 (Success)
 *
 */

int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
