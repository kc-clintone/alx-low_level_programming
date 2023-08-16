#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array
 * @array: target array
 * @size: size of arry
 * @action: action to perform
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
