#include "search_algos.h"
/**
 * exponential_search - This function searches a
 * sorted array of integers
 * @array: Pointer to first element
 * @size: Number of elements in array
 * @value: Target value
 * Return: `value`, or -1 or NULL
*/
int exponential_search(int *array, size_t size, int value)
{
size_t x, y, b = 1;

if (!array || size == 0)
return (-1);
while (b < size && array[b] < value)
{
printf("Value checked array[%lu] = [%d]\n",
b , array[b]);
b *= 2;
}
x = b / 2;
y = min(b, size - 1);
printf("Value found between indexes [%lu] and [%lu]\n", x, y);
return (bsh(array, value, x, y));
}
