#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int num, back, front, calc;

	if (size > 0)
	{
		for (num = 1; num <= size; num++)
		{
			calc = size - num;
			for (back = 1; back <= calc; back++)
			{
				_putchar(' ');
			}
			for (front = 1; front <= num; front++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
