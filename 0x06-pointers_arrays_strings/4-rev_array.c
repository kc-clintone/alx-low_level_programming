#include "main.h"

/**
* reverse_array - reverses the elements of an array
*
* @a: the target array
* @n: target number of elements
*/

void reverse_array(int *a, int n)
{
int m, i;

for (i = n - 1; i > n / 2; i--)
{
m = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = m;
}
}
