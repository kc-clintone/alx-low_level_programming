#include "main.h"

/**
* is_prime_number - a function that returns 1 if
* the input integer is a prime number,
* otherwise return 0
*
* @n: target number
*
* Return: true - if the number is prime
*/
int is_prime_number(int n)
{
int base = n / 2;

if (n <= 1)
return (0);
return (is_prime(n, base));
}

/**
* is_prime - will return 1 if n is prime
*
* @n: target number
*
* @base: the control variable
*
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int n, int base)
{
if (base <= 1)
return (1);
else if (n % base == 0)
return (0);
return (is_prime(n, base - 1));
}
