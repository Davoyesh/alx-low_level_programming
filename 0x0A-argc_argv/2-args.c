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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
