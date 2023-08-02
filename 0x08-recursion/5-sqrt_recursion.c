#include "main.h"

/**
* _sqrt_recursion - a function that returns the
* natural square root of a number
*
* @n: target number
*
* Return: sqrt of n
*/

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
return (n);
return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a
 * given number
 *
 * @n: the test number
 *
 * @x: n*n
 *
 * Return: sqrt of n
 */

int _sqrt(int n, int x)
{
if (n > x / 2)
return (-1);
else if (n * n == x)
return (n);
return (_sqrt(n + 1, x));
}
