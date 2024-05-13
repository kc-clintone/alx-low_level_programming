#include "search_algos.h"
/**
 * bsr - This is a helper function
 * @arr: Pointer to first element
 * @v: Target value
 * @x: start index
 * @y: last index
 * Return: `value`, or -1 or NULL
*/
int bsr(int *arr, int v, size_t x, size_t y)
{
size_t m, j;

if (!arr)
return (-1);
m = (x + y) / 2;
printf("Searching in array: ");
for (j = x; j <= y; j++)
printf("%i%s", arr[j], j == y ? "\n" : ", ");
if (arr[x] == v)
return ((int)x);
if (arr[x] != arr[y])
{
if (arr[m] < v)
return (bsr(arr, v, m + 1, y));
if (arr[m] >= v)
return (bsr(arr, v, x, m));
}
return (-1);
}
