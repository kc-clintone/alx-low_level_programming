#include "main.h"
/**
 * read_textfile - Reads and prints the content of a text file
 * up to a specified number of letters.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters to read and print.
 *
 * Return: The actual number of letters read
 * and printed, or 0 on error.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd = fopen(filename, "r");
	char bfr;
	size_t i;
	ssize_t input = 0;

	if (filename == NULL)
	{
		return (0);
	}
	if (fd == NULL)
	{
		return (0);
	}
	for (i = 0; i < letters; i++)
	{
		if (fread(&bfr, sizeof(char), 1, fd) != 1)
		{
			break;
		}
		putchar(bfr);
		input++;
	}
	fclose(fd);
	return input;
}
