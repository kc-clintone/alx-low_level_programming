#include "main.h"

/**                                                                     * print_error - Print an error message and exit with status 98.
 * @message: The error message to be printed.
 */
void print_error(const char *message)
{
fprintf(stderr, "%s\n", message);
exit(98);
}
