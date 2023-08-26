#include "main.h"
/**
* _strdup - returns a pointer to a new string which
* is a duplicate of the string str
*
* @str: target string
*
* Return: NULL => error, else, A pointer to the
* allocated space
*/

char *_strdup(char *str)
{
char *cpy;
int index, len;

if (str == NULL)
return (NULL);
for (index = 0; str[index]; index++)
len++;
cpy = malloc(sizeof(char) * (len + 1));
if (cpy == NULL)
return (NULL);
for (index = 0; str[index]; index++)
{
cpy[index] = str[index];
}
cpy[len] = '\0';
return (cpy);
}
