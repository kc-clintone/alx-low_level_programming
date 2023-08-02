#include "main.h"

/**
 * factorial - function that returns the factorial of a
 * given number
 *
 * @n: the target number
 *
 * Return: factorial of @n
*/

int factorial(int n)
{
int next;

if (n == 0)
return (1);
else if (n < 0)
return (-1);

next = factorial(n - 1);
return (n * next);
}
