#include <stdio.h>
/**
 * __attribute__ - constructor
 * before - a function that  executes
 * before the main function does
 */
void __attribute__((constructor)) before(void);
void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
