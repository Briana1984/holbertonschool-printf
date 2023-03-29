#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * pString - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int pString(va_list list)
{
int i;
char *string;
string = va_arg(list, char *);
if (string == NULL)
string = "(null)";
for (i = 0; string[i] != '\0'; i++)
_putcharf(string[i]);
return (i);
}
