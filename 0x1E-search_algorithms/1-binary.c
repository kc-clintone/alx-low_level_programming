#include "search_algos.h"

/**
 * binary_search - This function searches an array of
 * inters using binary search algo
 *
 * @arr: Pointer to first element of target array
 * @x: Elements in array
 * @y: Target value
 * Return: Index with `value`, | -1 if `value` not found |
 * `array` is NULL
*/
int binary_search(int *arr, size_t x, int y)
{
int i, j, k, m;

if (arr == NULL)
return (-1);
i = 0;
k = x - 1;
while (i <= k)
{
j = (i + k) / 2;
printf("Searching array: ");
for (m = i; x <= k; m++)
printf("%i%s", arr[m], m == k ? "\n" : ", ");
if (arr[j] < x)
i = j + 1;
else if (arr[j] > x)
k = j - 1;
else
return (j);
}
return (-1);
}
