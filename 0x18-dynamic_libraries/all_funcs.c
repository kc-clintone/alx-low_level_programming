#include "main.h"

int _putchar(char c)
{
return (write(1, &c, 1));
}

int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}

int _isalpha(int c)
{
return ((_islower(c)) || (c >= 'A' && c <= 'Z'));
}

int _abs(int n)
{
return (n < 0 ? -n : n);
}

int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}

int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}

void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}

char *_strcpy(char *dest, char *src)
{
char *start = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}

int _atoi(char *s)
{
int sign = 1;
int result = 0;
while (*s == ' ' || (*s >= 9 && *s <= 13))
{
s++;
}
if (*s == '-' || *s == '+')
{
sign = (*s == '-') ? -1 : 1;
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return (result * sign);
}

char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}

char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (start);
}

char *_strncpy(char *dest, char *src, int n)
{
char *start = dest;
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (start);
}

int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
if (*s1 == '\0')
return (0);
s1++;
s2++;
}
return (*s1 - *s2);
}

char *_memset(char *s, char b, unsigned int n)
{
while (n > 0)
{
*s = b;
s++;
n--;
}
return (s);
}

char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
return (dest);
}

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}
return (NULL);
}

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s != '\0' && _strchr(accept, *s) != NULL)
{
count++;
s++;
}
return (count);
}

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
if (_strchr(accept, *s) != NULL)
return (s);
s++;
}
return (NULL);
}

char *_strstr(char *haystack, char *needle)
{
char *start, *pattern;
while (*haystack != '\0')
{
start = haystack;
pattern = needle;
while (*haystack == *pattern && *pattern != '\0')
{
haystack++;
pattern++;
}
if (*pattern == '\0')
return (start);
haystack = start + 1;
}
return (NULL);
}
