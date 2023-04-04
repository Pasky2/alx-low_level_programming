#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: String to seacrh
 * @accept: Set of bytes to search for
 * Return: If a set is matched to a pointer and NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
