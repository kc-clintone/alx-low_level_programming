#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * find_largest - This function finds the largest number.
 * @uname: The username.
 * @len: Length of username.
 * Return: The number.
*/
int find_largest(char *uname, int len)
{
int _char;
int _vchar;
unsigned int _random;

_char = *uname;
_vchar = 0;
while (_vchar < len)
{
if (_char < uname[_vchar])
_char = uname[_vchar];
_vchar += 1;
}
srand(_char ^ 14);
_random = rand();
return (_random & 63);
}

/**
 * product - This function multiplies each char of the username.
 * @uname: The username.
 * @len: Length of username.
 * Return: Final char
 */
int product(char *uname, int len)
{
int _char;
int _vchar;

_char = _vchar = 0;
while (_vchar < len)
{
_char = _char + uname[_vchar] * uname[_vchar];
_vchar += 1;
}
return (((unsigned int)_char ^ 239) & 63);
}

/**
 * rando - This function generates a random char.
 * @uname: username.
 * Return: The random char.
 */
int rando(char *uname)
{
int _char;
int _vchar;

_char = _vchar = 0;
while (_vchar < *uname)
{
_char = rand();
_vchar += 1;
}
return (((unsigned int)_char ^ 229) & 63);
}

/**
 * main - Entry point to the keygen programme.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: Always 0
 */
int main(int argc, char **argv)
{
char keygen[7];
int l, c, v;
long alpha[] =
{
0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
0x723161513346655a, 0x6b756f494b646850
};
(void) argc;
for (l = 0; argv[1][l]; l++)
;
keygen[0] = ((char *)alpha)[(l ^ 59) & 63];
c = v = 0;
while (v < l)
{
c = c + argv[1][v];
v = v + 1;
}
keygen[1] = ((char *)alpha)[(c ^ 79) & 63];
c = 1;
v = 0;
while (v < l)
{
c = argv[1][v] * c;
v = v + 1;
}
keygen[2] = ((char *)alpha)[(c ^ 85) & 63];
keygen[3] = ((char *)alpha)[find_largest(argv[1], l)];
keygen[4] = ((char *)alpha)[product(argv[1], l)];
keygen[5] = ((char *)alpha)[rando(argv[1])];
keygen[6] = '\0';
for (c = 0; keygen[c]; c++)
printf("%c", keygen[c]);
return (0);
}
