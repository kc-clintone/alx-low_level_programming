#include "main.h"

/**
* _strcpy - a function that copies the string
* pointed to by src
*
* @dest: the paste destination
*
* @src: the source
*
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
int y = 0;
while (*(src + y) != '\0')
{
*(dest + y) = *(src + y);
y++;
}
*(dest + y) = '\0';
return (dest);
}
