#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to newly allocated string concatenation
 */

char *str_concat(char *s1, char *s2)
{
size_t length = strlen(s1) + strlen(s2) + 1;
char *result = (char *)malloc(length * sizeof(char));

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strcat(result, s2);
return (result);
}
