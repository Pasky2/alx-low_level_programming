/**
 * _strlen - returns the length of a string
 *
 * @c: string parameter input
 *
 * Return: length of string
 */

int _strlen(char *c)
{
	int counter;

	for (counter = 0; *c != '\0'; ++c)
		++counter;

	return (counter);
}
