#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("Error: No numbers provided\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error: Invalid number: %s\n", argv[i]);
			return (1);
		}
		sum += num;
	}

	printf("Sum: %d\n", sum);
	return (0);
}
