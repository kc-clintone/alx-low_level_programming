#include "main.h"

/**
 * _abs - will print the absolute value of
 * a number to the standard output
 *
 * @i: the targeted value
 * 
 * Return: 0 (Success)
 *
*/

int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
