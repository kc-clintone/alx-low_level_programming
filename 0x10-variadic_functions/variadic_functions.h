#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/* Function prototypes */
int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_floats(va_list arg);
void print_string(va_list arg);
void print_character(va_list arg);
void print_integer(va_list arg);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/* Structures 
 *
 * @ptc: print to console
 * 
 */
typedef struct print_to_console{
char *symbol;
void (*ptc)(va_list arg);
} print_to_console_t;

#endif
