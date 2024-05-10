#include "search_algos.h"
/**
 * linear_search - This function searches for a
 * value in an array of ints using linear search algo
 *
 * @arr: The input array
 * @x: Size of the array
 * @y: Target value
 * Return: 1
*/
int linear_search(int *arr, size_t x, int y)
{
size_t i;

if (arr == NULL)
return (-1);
for (i = 0; i < x; i++)
{
printf("Array checked[%li] = [%i]\n", i, arr[i]);
if (arr[i] == x)
return (i);
}
return (-1);
}
