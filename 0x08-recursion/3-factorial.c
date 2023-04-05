#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: Parameter to check
 * Return: -1 if n is less than 0 otherwise factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
