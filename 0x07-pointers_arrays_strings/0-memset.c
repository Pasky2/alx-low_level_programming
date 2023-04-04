#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte
 * @s: memory to be filled
 * @b: parameter to copy
 * @n: number of times to copy
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
