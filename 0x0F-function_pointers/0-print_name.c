/**
 * print_name - function that prints name
 *
 * @name: name to be printed
 * @f: function pointer that doesn't return anything
 *
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
