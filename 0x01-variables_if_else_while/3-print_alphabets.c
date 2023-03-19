#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints alphabets in lowercase and uppercase'
 * Return: Always 0
 */
int main(void)
{
	int lc = 97;
	int uc = 65;

	while (lc < 123)
	{
		putchar(lc);
		lc++;
	}
	while (uc < 91)
	{
		putchar(uc);
		uc++;
	}
	putchar('\n');
	return (0);
}
