#ifndef Variadic_Functions_H
#define Variadic_Functions_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct intype - Struct.
 * @s: Value.
 * @pt: Functions link.
 */

typedef struct intype
{

	char *s;
	void (*pt)(va_list);

} functions;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* Variadic_Functions_H */
