#include "main.h"
/**
 * print_string - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_string(va_list list)
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
