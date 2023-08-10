#include "main.h"
/**
 * malloc_checked - a function that allocates memory
 * using malloc
 *
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
void *block;

block = malloc(b);
if (block == NULL)
exit(98);
return (block);
}
