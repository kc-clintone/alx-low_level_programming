#include "main.h"
#include <stdbool.h>

/*
 * cap_string - capitalizes te first letter of a
 * word in a given string
 *
 * is_separator - stores the separaters
 * Description: the cap_string converts a character
 * to uppercase, while the is_separator returns all
 * separators
 * @str: points to the char parameter
 *
 * Return: *str
*/

bool is_separator(char c)
{
return (c == ' ' || c == '\t' || c == '\n' || c == ','
|| c == ';' || c == '.' || c == '!' || c == '?' ||
c == '"' || c == '(' || c == ')' || c == '{' ||
c == '}');
}

char *cap_string(char *str)
{
bool should_capitalize = true;
int i;

for (i = 0; str[i]; i++)
{
if (should_capitalize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
should_capitalize = is_separator(str[i]);
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
return (str);
}

