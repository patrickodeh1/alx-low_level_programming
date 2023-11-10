#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 * @array: an array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (action != NULL && size > 0 && array != NULL)
	{
		for (c = 0; c < size; c++)
			action(array[c]);
	}
}
