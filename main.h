#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct formating
{
	char *id;
	int *pointer;
} function;

int my_main(const char *format, ...);
int print_rot(va_list arg);
int print_rev(va_list arg);
int print_hexadecimal(unsigned long int num);
int print_pointer(va_list arg);
int print_S(va_list arg);
int print_Sextra(unsigned int value);
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
int print_char(va_list str);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
