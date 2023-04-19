#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if success, 1 if the number of arguments is incorrect, 2 if the
 * number of bytes is negative
 */
int main(int argc, char **argv)
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *opcodes = (unsigned char *) main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(opcodes + i));
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
