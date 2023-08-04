#include "main.h"

/**
* _isdigit - checks if a character is a digit
*
* @c: the character on test
*
* Return: 1 if isdigit , 0 oterwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
