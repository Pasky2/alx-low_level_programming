#include <stdio.h>
/**
 * main - A program that prints the size of various types of computer
 * Return: 0 (Successful)
 */
int main(void)
{
	char a;
	int d;
	long int dd;
	long long int ddd;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(dd));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ddd));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
