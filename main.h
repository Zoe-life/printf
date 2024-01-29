#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/*_putchar.c*/
int _putchar(char character);

/**/
int printf_char(va_list args, int printed);

/*string.c*/
int printf_string(va_list args, int printed);

/*integer.c*/
int printf_integer(va_list args, int printed);

/**/
int selector(const char *format, va_list args, int printed);

/*binary.c*/
int printf_binary(unsigned int num, int printed);

/*0-format.c*/
int _printf(const char *format, ...);

/*hex.c*/
int _x(unsigned int num, int printed, int uppercase);

/*octal.c*/
int printf_octal(unsigned int num, int printed);

/*unsigned.c*/
int printf_unsigned(unsigned int num, int printed);

/*reverse.c*/
int printf_reverse(va_list args, int printed);

/*pointer.c*/
int printf_pointer(va_list args, int printed);

#endif
