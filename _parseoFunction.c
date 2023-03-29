#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _parseo - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int _parseo(const char *format, specifiers_t f_list[], va_list arg_list)
{
int i;
int j;
int valReturn;
int printCh;
printCh = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; f_list[j].spcf != NULL; j++)
{
if (format[i + 1] == f_list[j].spcf[0])
{
valReturn = f_list[j].f(arg_list);
if (valReturn == -1)
return (-1);
printCh += valReturn;
break;
}
}
if (f_list[j].spcf == NULL && format[i + 1] != ' ')
{
if (format[i + 1] != '\0')
{
_putcharf(format[i]);
_putcharf(format[i + 1]);
printCh = printCh + 2;
}
else
return (-1);
}
i = i + 1;
}
else
{
_putcharf(format[i]);
printCh++;
}
}
return (printCh);
}
