#include "main.h"

/**
 * create_file - this function creates a file and writes text
 * content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }

    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600); // rw-------
    
    if (fd == -1) {
        return -1; // Failed to create or open the file
    }

    if (text_content != NULL) {
        ssize_t bytes_written = write(fd, text_content, strlen(text_content));
        if (bytes_written == -1) {
            close(fd);
            return -1; // Write failed
        }
    }

    close(fd);
    return 1; // Success
}
