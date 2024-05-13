#include "search_algos.h"
/**
 * interpolation_search - This function searches an
 * array of sorted integers using interpolation search algo
 * @array: Pointer to first element
 * @size: Number of elements in array
 * @value: Target value
 * Return: `value`, or -1 if `value` or NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
size_t x = 0;
size_t y = size - 1, z;

if (!array)
return (-1);
while ((array[y] != array[x]) &&
(value >= array[x]) && (value <= array[y]))
{
z = x + (((double)(y - x) / (array[y] - array[x]))
* (value - array[x]));
printf("Value checked array[%lu] = [%d]\n", z, array[z]);
if (array[z] < value)
x = z + 1;
else if (value < array[z])
y = z - 1;
else
return (z);
}
if (value == array[x])
{
printf("Value checked array[%lu] = [%d]\n", x, array[x]);
return (x);
}
z = x + (((double)(y - x) / (array[y] - array[x]))
* (value - array[x]));
printf("Value checked array[%lu] is out of range\n", z);
return (-1);
}
