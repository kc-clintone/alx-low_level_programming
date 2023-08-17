#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

typedef struct printer
{
char *symbol;
void (*print)(va_list arg);
} printer_t;


int sum_them_all(const unsigned int n, ...);

#endif
