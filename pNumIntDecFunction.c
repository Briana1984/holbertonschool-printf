#include "main.h"
/**
 * pnumIndDec - print integer and decimal
 * @args: parameter
 *
 *
 * Return: 0
 */
int pnumIndDec(va_list args)
{
int n;
int tam;
int div;
unsigned int num;
n = va_arg(args, int);
div = 1;
tam = 0;
if (n < 0)
{
tam += _putcharf('-');
num = n * -1;
}
else
{
num = n;
}
for (; num / div > 9;)
{
div *= 10;
}
for (; div != 0;)
{
tam += _putcharf('0' + num / div);
num %= div;
div /= 10;
}
return (tam);
}
