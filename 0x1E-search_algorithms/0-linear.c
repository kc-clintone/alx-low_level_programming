#include "search_algos.h"
/**
 * linear_search - This function searches for a
 * value in an array of ints using linear search algo
 *
 * @array: The input array
 * @size: Size of the array
 * @value: Target value
 * Return: 1
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
printf("Array checked[%li] = [%i]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
