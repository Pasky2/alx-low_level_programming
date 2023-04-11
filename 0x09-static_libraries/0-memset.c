/**
 * _memset - a function that fills
 * memory with a constant byte
 *
 * @c: input pointer to char type
 * represents the pointer to the
 * block of memory to fill
 * @i: input variable of char type
 * represents the character to
 * fill s
 * @n: unsigned int variable
 * the number of bytes to be filled
 * Return: A pointer to the filled memory
 * area @c
 */

char *_memset(char *c, char i, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	 */
	unsigned int j;

	for (j = 0; j < n; j++)
		c[j] = i;

	return (c);
}
