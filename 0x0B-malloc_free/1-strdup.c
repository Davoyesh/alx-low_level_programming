#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicate a string
 * @str: Input string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	int i, size;
	char *mychar;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);

	if (size == 0)
	{
		size = 1;
	}

	mychar = (char *) malloc((size + 1) * sizeof(char));

	if (mychar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		mychar[i] = str[i];
	}
	mychar[size] = '\0';
	return (mychar);
}
