#include "main.h"
/**
 * positive_or_negative - function that checks for negative or positive numbers
 * @i: parameter to be checked
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
