#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array with.
 *
 * Description: This function dynamically allocates memory
 * for an array of chars
 * with the given size, and initializes each element with the specified char.
 *
 * Return: A pointer to the array,
 * or NULL if memory allocation fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
