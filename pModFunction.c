#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * pMod - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int pMod(__attribute__((unused))va_list list)
{
_putcharf('%');
return (1);
}
