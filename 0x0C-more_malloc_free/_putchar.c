#include <unistd.h>

/**
 * _putchar - writes the character c to stdndard
 * output
 *
 * @c: character to be print
 *
 * Return: 1 ==> success, -1 ==> Error
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
