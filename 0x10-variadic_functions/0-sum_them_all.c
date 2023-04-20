#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 *
 * @n: start of input variables
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int par, sum = 0;

	va_start(a, n);

	for (par = 0; par < n; par++)
		sum += va_arg(a, int);
	va_end(a);

	return (sum);
}
