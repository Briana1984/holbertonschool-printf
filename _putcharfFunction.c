#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _putcharf - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 iss returned, and errno is set appropriately.
 */
int _putcharf(char c)
{
return (write(1, &c, 1));
}
