#include <stdio.h>

/**
 * main - A program which prints the size of different types of computer
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char is %lu byte(s).\n", sizeof(char));
	printf("Size of a int is %lu byte(s).\n", sizeof(int));
	printf("Size of a long int is %lu byte(s).\n", sizeof(long int));
	printf("Size of a long long int is %lu byte(s).\n", sizeof(long long int));
	printf("Size of a float is %lu byte(s).\n", sizeof(float));
	return (0);
}
