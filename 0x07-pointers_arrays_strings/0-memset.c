#include <stddef.h>

/**
 * Fills the first n bytes of the memory area pointed to by s with the constant byte c.
 *
 * @param s     A pointer to the memory area to be filled.
 * @param c     The value to be set.
 * @param n     The number of bytes to be set to the value.
 *
 * @return A pointer to the memory area s.
 */

void* memset(void* s, int b, size_t n)
{
	unsigned char* p = s;
	unsigned char value = (unsigned char)b;
	while (n-- > 0)
	{
		*p++ = value;
	}
	return s;
}
