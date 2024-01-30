#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{

	va_list (args);

	int count = 0; /** initialiing to 0 **/
	int a;

	va_start(args, format);

	/** ensurering character is not empty **/
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				while(*format != '\0')
				{
					a = va_arg(args, int);
					putchar (a + '0');
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar ('%');
				count++;
			}
		}
		format++;
	}

	va_end(args);
	return (count);
}
