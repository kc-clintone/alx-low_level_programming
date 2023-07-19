#include"main.h"

/**
 * _isalpha - a function that checks for alphabetic
 * character
 *
 * Return: 1 if c is true and 0 otherwise
 *
 * @c: a aparameter that takes a function as input
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
	    c >= 65 && c >= 90)
		return (1);
	return (0);
}
