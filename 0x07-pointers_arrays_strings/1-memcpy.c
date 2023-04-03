#include "main.h"

/**
 * _memcpy - fuction that copies memory area
 * @dest: this is where memory is stored
 * @src: this is where memory is copied
 * @n: this is the number of bytes
 * Return: copied memory with n bytes unchanged
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
