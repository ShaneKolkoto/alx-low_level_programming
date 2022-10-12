#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 *                  of an array.
 *
 * @array: printable elements
 * @size: printable elements number
 * @action: printable function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long cLoop;

	if (!array || !action)
		return;

	for (cLoop = 0; cLoop < size; cLoop++)
	{
		action(array[cLoop]);
	}
}
