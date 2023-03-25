#include "main.h"
/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 * @n: parameter to be checked
 */
void print_diagonal(int n)
{
int x;
int y;

if (n <= 0)
_putchar('\n');
for (y = 0; y < n; y++)
{
for (x = y; x > 0; x--)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
