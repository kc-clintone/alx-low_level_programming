#include "search_algos.h"
/**
 * advanced_binary - This function searches a
 * sorted array of integers
 * @array: Pointer to first element
 * @size: Number of elements in array
 * @value: Target value
 * Return: `value`, or -1 or NULL
*/
int advanced_binary(int *array, size_t size, int value)
{
size_t x = 0;
size_t y = size - 1;

if (!array)
return (-1);
return (bsr(array, value, x, y));
}
