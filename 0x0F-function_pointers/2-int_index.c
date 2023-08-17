#include "function_pointers.h"
/**
 * int_index - returns the index of the first element
 * for which the cmp function does not return 0
 * @array: the target array
 * @size: is the number of elements in the array "array"
 * @cmp: is a pointer to the function to be used to
 * compare values
 * Return: If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
