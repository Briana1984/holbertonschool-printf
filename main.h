#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
 */

typedef struct specifiers
{
char *spcf;
int (*f)(va_list);
} specifiers_t;

int _putcharf(char c);
int parser(const char *format, specifiers_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int pChar(va_list);
int pString(va_list);
int print_percent(va_list);
int print_decimal_integer(va_list);
int print_numberDI(va_list args);

#endif
