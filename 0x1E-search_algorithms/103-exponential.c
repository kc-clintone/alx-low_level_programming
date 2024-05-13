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

/**
 * min - Returns the minumum of two values
 * @x: Target value
 * @y: Target value
 * Return: y: if y <= x, y otherwise
*/
size_t min(size_t x, size_t y)
{
return (x <= y ? x : y);
}

/**
 * bsh - This function searches for a value in an
 * integer array using a binary search algorithm
 * @array: Pointer to first element
 * @value: Target value
 * @x: start index
 * @y: last index
 * Return: `value`, or -1 or NULL
*/
int bsh(int *arr, int v, size_t x, size_t y)
{
size_t m, i;

if (!arr)
return (-1);
while (x <= y)
{
m = (x + y) / 2;
printf("Searching in array: ");
for (i = x; i <= y; i++)
printf("%i%s", arr[i], i == y ? "\n" : ", ");
if (arr[m] < v)
x = m + 1;
else if (arr[m] > v)
y = m - 1;
else
return ((int)m);
}
return (-1);
}
