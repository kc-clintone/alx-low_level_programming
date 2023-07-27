#include "main.h"

/**
* string_toupper - converts lowercases characters to uppercase
*
* @str: target parameter
*
* Return: char
*/

char *string_toupper(char *str)
{
int index = 0;

while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
{
str[index] -= 32;
}
index++;
}
return str;
}
