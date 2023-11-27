#include "main.h"

/**
 * main - Entry point for the cp program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or an error code as specified in the requirements.
 */
int main(int argc, char *argv[])
{
int fd_in, fd_out;
ssize_t br, bw, i;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_in = open(argv[1], O_RDONLY);
if (fd_in == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_out == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_in);
exit(99);
}
while ((br = read(fd_in, buffer, BUFFER_SIZE)) > 0)
{
for (i = 0; i < br; i++)
{
bw = write(fd_out, &buffer[i], 1);
if (bw != 1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(fd_in);
close(fd_out);
exit(99);
}
}
}
if (br == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(fd_in);
close(fd_out);
exit(98);
}
if (close(fd_in) == -1 || close(fd_out) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
exit(100);
}
return (0);
}

