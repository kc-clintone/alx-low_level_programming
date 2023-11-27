#include "main.h"

/**
 * create_file - this function creates a file and writes text
 * content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
int file_descriptor;
ssize_t bw;
if (filename == NULL)
return (-1);
file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1);
if (text_content != NULL)
{
bw = write(file_descriptor, text_content, strlen(text_content));
if (bw == -1)
{
close(file_descriptor);
return (-1);
}
}
close(file_descriptor);
return (1);
}

