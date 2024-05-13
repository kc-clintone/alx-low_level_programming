#include "search_algos.h"
/**
 * jump_search - This function searches a sorted array of
 * integers using jump search algorithm
 * @array: Pointer to top element of target array
 * @size: Number of elements in this array
 * @value: Target
 * Return: `value`, or -1 if `value` or `array` is NULL
*/

int jump_search(int *array, size_t size, int value)
{
size_t x, y, z;

if (!array || size == 0)
return (-1);
z = sqrt(size);
for (y = 0; y < size && array[y] < value; x = y, y += z)
printf("Value checked array[%lu] = [%d]\n", y, array[y]);
printf("Value found between indexes [%lu] and [%lu]\n", x, y);
for (; x <= min(y, size - 1); x++)
{
printf("Value checked array[%lu] = [%d]\n", x, array[x]);
if (array[x] == value)
return (x);
}
return (-1);
}
