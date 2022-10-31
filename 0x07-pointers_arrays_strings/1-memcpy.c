#include "main.h"

/**
 * _memcpy -  copies memory area.
 * @dest: copy to.
 * @src: copy from.
 * @n: number of bytes copy from @src.
 *
 * Return: a pointer to dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
