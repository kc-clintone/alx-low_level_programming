#include "main.h"

/**
* print_array - a function that prints n
* elements of an array
*
* @a: the array on target
*
* @n: the number of elements
*
* Return: nothing
*/
void print_array(int *a, int n)
{
int y;
for (y = 0; y < n ; y++)
{
if (y != n - 1)
printf("%d, ", a[y]);
else
printf("%d", a[y]);

}
printf("\n");
}
