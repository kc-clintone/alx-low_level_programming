#include "search_algos.h"

/**
 * binary_search - This function searches for a value in a sorted array
 * of integers.
 * @array: Pointer to the first element of the target array
 * @size: Number of elements in array
 * @value: Target value
 *
 * Return: index of value, otherwise -1 if array not found or is null
 */

int binary_search(int *array, size_t size, int value)
{
ulong l, h, m, index;

if (!array || size == 0)
return (-1);

l = 0;
h = size - 1;

while (l < h)
{
printf("Searching in array: ");
for (index = l; index <= h; index++)
printf("%d%s", array[index], (index < h) ? "," : "\n");

m = (l + h) / 2;

if (value == array[m])
return (m);

if (value < array[m])
h = m - 1;

else if (value > array[m])
l = m + 1;
}
return (-1);
}
