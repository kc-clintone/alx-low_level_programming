#include "search_algos.h"
/**
 * binary_search - This function searches an array of
 * inters using binary search algo
 *
 * @array: Pointer to first element of target array
 * @size: Elements in array
 * @value: Target value
 * Return: Index with `value`, | -1 if `value` not found |
 * `array` is NULL
*/
int binary_search(int *array, size_t size, int value)
{
int i, j, k, m;

if (array == NULL)
return (-1);
i = 0;
k = size - 1;
while (i <= k)
{
j = (i + k) / 2;
printf("Searching array: ");
for (m = i; m <= k; m++)
printf("%i%s", array[m], m == k ? "\n" : ", ");
if (array[j] < size)
i = j + 1;
else if (array[j] > value)
k = j - 1;
else
return (j);
}
return (-1);
}
