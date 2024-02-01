#include "main.h"

/**
 * main - main entry point
 * @format: member
 *
 * Return: nothing
 */
int main(const char *format, ...)
{
	function array[] = {
		{"%c", print_char}, {"%s", print_string}, {"%%", print_mod}, {"%d", _printf}, {"%i", _printf}, {"%b", print_binary}, {"%u", print_unsigned}, {"%o", print_octa}, {"%x", print_hex}, {"%X", print_HEX}, {"%S" print_S}, {"\x",

