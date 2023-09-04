#include "main.h"
/**
 * _copyfn - Entry point for the cp program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line
 * arguments.
 *
 * Return: 0 on success, or an error code as specified in the
 * requirements.
 */
int main(int argc, char *argv[])
{
	int _from, _dest;
	ssize_t _read, _written, i;
	char buffer[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_from = open(argv[1], O_RDONLY);
	if (_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(_from);
		exit(99);
	}
	while ((_read = read(_from, buffer, BUFFER)) > 0)
	{
		for (i = 0; i < _read; i++)
		{
			_written = write(_dest, &buffer[i], 1);
			if (_written != 1)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
				close(_from);
				close(_dest);
				exit(99);
			}
		}
	}
	if (_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(_from);
		close(_dest);
		exit(98);
	}
	if (close(_from) == -1 || close(_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", errno);
		exit(100);
	}
	return (0);
}
