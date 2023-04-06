#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Usage: %s <num1> <num2>\n", argv[0]);
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("Multiplication result: %d\n", result);

	return (0);
}
