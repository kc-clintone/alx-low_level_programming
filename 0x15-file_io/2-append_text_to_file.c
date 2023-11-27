#include "main.h"
/**
 * append_text_to_file - this function appends text to the end of
 * a file.
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string to add at the end of
 * the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_desc = open(filename, O_WRONLY | O_APPEND);
ssize_t bw;

if (filename == NULL)
return (-1);
if (file_desc == -1)
return (-1);
if (text_content != NULL)
bw = write(file_desc, text_content, strlen(text_content));
if (bw == -1)
{
close(file_desc);
return (-1);
}
}

close(file_desc);
return (1);
}

