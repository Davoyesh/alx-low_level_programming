#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenate two strings
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: Pointer to the concatenated string,
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len2; j++)
		concatenated[len1 + j] = s2[j];

	concatenated[len1 + len2] = '\0';

	return (concatenated);
}
