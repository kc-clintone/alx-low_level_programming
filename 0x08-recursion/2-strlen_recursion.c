#include "main.h"
/**
 * _strlen_recursion - gives the length of a string
 *
 * @s: target string
 *
 * Return: length of the string
*/

int _strlen_recursion(char *s)
{
int strlen = 0;

if (*s != '\0')
{
strlen++;
strlen += _strlen_recursion(s + 1);
}
return (strlen);
}
