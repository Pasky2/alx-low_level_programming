#include <stdio.h>

/**
 * print_triangle - print backwards triangle of a size
 * @size: size of square
 */
void print_triangle(int size)
{
int x, y, k, w, t;
w = 1;
t = size;
if (size <= 0)
putchar('\n');
for (y = 0; y < size; y++)
{
for (x = 0; x < (t - 1); x++)
putchar(' ');
for (k = 0; k < w; k++)
putchar('#');
putchar('\n');
t--;
w++;
}
}
