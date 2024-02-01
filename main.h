#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int print_HEX(va_list arg);
int print_hex(va_list arg);
int print_octa(va_list arg);
int print_unsigned(va_list arg);
int print_binary(int *binary, ...);
int print_int(const char *format, ...);
int print_mod(void);
int _strlen(char *str);
int _strlen_constant(const char *str);
int print_string(char *);
int print_char(char *);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
