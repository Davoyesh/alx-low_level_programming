#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with a limit on s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1 = 0, ls2 = 0, lsout = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[ls1] != '\0')
		ls1++;

	while (s2[ls2] != '\0')
		ls2++;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - ls1];

	sout[i] = '\0';

	return (sout);
}
