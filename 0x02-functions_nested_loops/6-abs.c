#include "main.h"

/**
 * _abs - a function that gets the absolute value
 *
 * @a: input of the function
 *
 * Return: Always 0 (Success)
 *
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = 0 - a;
	}

	return (a);
}
