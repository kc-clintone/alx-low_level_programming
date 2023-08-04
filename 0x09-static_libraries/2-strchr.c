#include "main.h"
#include <stddef.h>
/**
* _strchr - Returns pointer to c in the string s, or
* NULL if the character is not found
*
* @s: the target
* @c: the targeted char
*
* Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
int i;

for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
;
if (s[i] == c)
return (s + i);
else
return (NULL);
}
