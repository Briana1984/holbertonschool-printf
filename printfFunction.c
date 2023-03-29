#include "main.h"
/**
* _puntchar - function to print
* _process_format - process the format
*@format: char
*@count: int
*/
int _printf(const char *format, ...) {
va_list args;
va_start(args, format);
int count = 0;
while (*format != '\0') {
if (*format == '%') {
format++;
switch (*format) {
case 'c': {
char value = (char) va_arg(args, int);
putchar(value);
count++;
break;
}
case 's': {
char *value = va_arg(args, char *);
while (*value != '\0') {
putchar(*value);
value++;
count++;
}
break;
}
case 'd':
case 'i':
{
int value = va_arg(args, int);
printf("%d", value);
count++;
break;
}
case '%':
{
putchar('%');
count++;
break;
}
default:
printf("Error: unsupported format specifier '%c'", *format);
return -1;
}
}
else
{
putchar(*format);
count++;
}
format++;
}
va_end(args);
return count;
}
