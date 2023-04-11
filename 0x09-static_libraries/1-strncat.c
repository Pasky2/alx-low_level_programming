/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	/*find size of dest array*/
	while (dest[i])
		i++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	/*null terminate dest*/
	dest[i + j] = '\0';

	return (dest);
}
