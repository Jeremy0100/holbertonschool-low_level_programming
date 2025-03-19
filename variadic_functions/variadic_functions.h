#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_all(const char *const format, ...);
#endif
