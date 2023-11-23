#include <stdio.h>
#include main.h

unsigned int bin_to_uint(const char *b)
{
unsigned int result = 0;
int counter = 0;
char c = b[counter];
int bit = c - '0';

if (b == NULL)
return (0);

/** Iterate through the binary string */
while (b[counter] != '\0')
{
/** Check if the character is '0' or '1' */
if (c != '0' && c != '1')
{
return (0);
}
/** Convert the character to its numerical value */
/** Shift the result left by one position and add the new bit */
result = (result << 1) | bit;
counter++;
}
return (result);
}
