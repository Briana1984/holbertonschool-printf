#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * pIntDec - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int pIntDec(va_list list)
{
int tam;
tam = pNumIntDec(list);
return (tam);
}
