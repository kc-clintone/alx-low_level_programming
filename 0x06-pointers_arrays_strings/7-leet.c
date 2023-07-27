#include "main.h"
/**
* leet - a function that encodes a string
*
* @str: the string that's to be encoded
* Return: str
*/

char *leet(char *str)
{
int i = 0, j;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[i])
{
for (j = 0; j < 8; j++)
{
if (str[i] == leet[j] || (str[i] >= 'a' && str[i] <= 'z' && str[i] - 32 == leet[j]))
{
str[i] = j + '0';
break;
}
}
i++;
}
return str;
}

