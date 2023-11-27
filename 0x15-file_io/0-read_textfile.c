#include "main.h"

/**
 * read_textfile - this function reads and prints the content
 * of a text file up to a specified number of letters.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on
 * error.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
size_t i;
char bfr;
ssize_t b_in = 0;
FILE *file = fopen(filename, "r");

if (filename == NULL)
return (0);
if (file == NULL)
return (0);

for (i = 0; i < letters; i++)
{
if (fread(&bfr, sizeof(char), 1, file) != 1)
break;
putchar(bfr);
b_in++;
}
fclose(file);
return (b_in);
}

