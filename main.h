#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @spec: format specifier
 * @fp: pointer to the correct printing function
 */

typedef struct printHandler
{
	char spec;
	int (*fp)(va_list);
} form;

void my_itoa(long x);
int _printf(const char *format, ...);
int print_int(va_list ap);
int print_ch(va_list ap);
int print_str(va_list ap);
int (*get_form(char c))(va_list);
#endif
