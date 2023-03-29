#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * pChar - writes strings
 * @list: parameter
 *
 * Return: 0
 *
 */
int pChar(va_list list)
{
_putcharf(va_arg(list, int));
return (1);
}
