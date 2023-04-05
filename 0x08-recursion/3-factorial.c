#include "main.h"

/**
 * factorial - this returns the factorial of a number
 * @n: input number
 * Return: returns the factorial of the input number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
