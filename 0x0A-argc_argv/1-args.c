#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
