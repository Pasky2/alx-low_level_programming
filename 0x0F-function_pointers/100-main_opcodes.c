#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the opcodes of its own main function
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int j, nbytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < nbytes; j++)
	{
		printf("%02x", ptr[j] & 0xFF);
		if (j != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
