#include"main.h"

/**
 * _islower - will check to see if a character
 * is lowercase
 *
 * Return: 1 if a character is lowercase and 0
 * if a character is uppercase
 *
 * @c - is the function we are passing as the parameter
 * for the check
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
