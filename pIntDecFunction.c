#include "main.h"
/**
 * pIntDec - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int pIntDec(va_list list)
{
int tam;
tam = print_numberDI(list);
return (tam);
}
