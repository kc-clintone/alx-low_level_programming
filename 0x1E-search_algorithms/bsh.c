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
