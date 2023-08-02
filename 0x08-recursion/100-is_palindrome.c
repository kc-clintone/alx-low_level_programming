#include "main.h"

/**
* is_palindrome - returns true if the given string
* is a palindrome
*
* @s: target string
*
* Return: true - if the given string is a palindrome
*/

int is_palindrome(char *s)
{
int index = 0;
int len = find_strlen(s);

if (!(*s))
return (1);
return (check_palindrome(s, len, index));
}

/**
 * find_strlen - returns length of a string.
 * @s: target string
 *
 * Return: length of string.
 */
int find_strlen(char *s)
{
int len = 0;

if (*(s + len))
{
len++;
len += find_strlen(s + len);
}

return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome.
 *
 * @s: target  string
 *
 * @len: length of @s
 *
 * @index: index of target string
 *
 * Return: 1 => is_palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int index)
{
if (s[index] == s[len / 2])
return (1);
if (s[index] == s[len - index - 1])
return (check_palindrome(s, len, index + 1));
return (0);
}
