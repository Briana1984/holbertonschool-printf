#include "main.h"
/**
 * _printf - program print to print
 * @format: parameter
 *
 * Return: 0
 *
 */
int _printf(const char *format, ...)
{
int printCh;
specifiers_t f_list[] = {
{"c", pChar},
{"s", pString},
{"%", pMod},
<<<<<<< HEAD
{"d", pIntDec},
{"i", pIntDec},
=======
{"d", print_decimal_integer},
{"i", print_decimal_integer},
>>>>>>> 1beeeef36f49942710dcdaed08b81cd08494fccc
{NULL, NULL}
};
va_list arg_list;
if (format == NULL)
return (-1);
va_start(arg_list, format);
printCh = parser(format, f_list, arg_list);
va_end(arg_list);
return (printCh);
}
