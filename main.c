#include "main.h"

/**
 * main - main entry point
 * @format: member
 *
 * Return: nothing
 */
int my_main(const char *format, ...)
{
	function array[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_mod},
		{"%d", _printf},
		{"%i", _printf},
		{"%b", print_binary},
		{"%u", print_unsigned},
		{"%o", print_octa},
		{"%x", print_hex},
		{"%X", print_HEX},
		{"%S", print_S},
		{"\x", print_Sextra},
		{"%p", print_pointer},
		{"%r", print_rev},
		{"%R", print_rot}
	};

	va_list arg;
	int i, length, count;

	i = 0;
	count = 0;
	length = 0;

	va_start(arg, format);
	/** cheaking if format is null or only modulo **/
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1)
	}

	/** loop to look over the format **/
	while (format[i] != '\0')
	{
		count = 13;
		while (count >= 0)
		{
			/** finding percentage character **/
			if (array[count].id[0] == format[i] && array[count].id[1] == format[i +1])
			{
				length = length + array[count].pointer(arg);
				i = i + 2;
				goto Here; /** jumps back to here to cheack place holders **/
			}
			count--;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	va_end(arg);
	return (length);
}
