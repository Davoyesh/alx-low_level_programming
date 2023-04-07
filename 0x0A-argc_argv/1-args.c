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
	/*Cast argv to void to avoid unused parameter warnings*/
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
