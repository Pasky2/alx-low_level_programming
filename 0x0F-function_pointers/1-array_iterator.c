#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a given function
 *as a parameter on each element of an array
 *
 * @array: The array to iterate
 * @size: The size of array
 * @action: The pointer to function to call
 *
 * Return: empty if @array and @action is NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array != NULL && size > 0 && action != NULL)
		for (j = 0; j < size; j++)
			action(array[j]);
}
