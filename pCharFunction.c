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
