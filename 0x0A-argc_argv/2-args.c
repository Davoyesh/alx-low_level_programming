#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc - 1);
	printf("\n");

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
