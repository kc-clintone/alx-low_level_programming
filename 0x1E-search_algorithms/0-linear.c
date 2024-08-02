#include "search_algos.h"

/**
 * linear_search - This function that searches for a value in an array
 * of integers.
 * @array: Pointer to the first element of the array target array
 * @size: Number of elements in array
 * @value: Target value
 * Return: index of value else -1 if array not found or is null
 */

int linear_search(int *array, size_t size, int value)
{
size_t index = 0;

if (!array || size == 0)
return (-1);

for (index = 0; index < size; index++)
{
printf("Value checked array[%lu] = [%d]\n", index, array[index]);
if (array[i] == value)
return (index);
}
return (-1);
}
