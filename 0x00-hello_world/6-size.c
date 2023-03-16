#include <stdio.h>

/**
 * main - A program which prints the size of different types of computer
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)",(unsigned long)sizeof(char));
	printf("Size of a int: %lu byte(s)", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(long int);
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float));
	return (0);
}
