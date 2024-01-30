#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - main entry point
 * @format: member
 *
 * Return: to the main function
 */
int _printf(const char *format, ...)
{
	va_list args;

	int count = 0;
	int c;
	char *s;

	va_start(args, format);

	while (*format != '\0')
	{
		return (-1);
		/** to check if the format is % to continue **/
		if (*format == '%')
		{
			format++; /** moving to next character **/

			if (*format == 'c') /** to check if next character is c **/
			{
				c = va_arg (args, int);

				putchar (c);
				count++;
			}

			/** to cheack if next format is s then loop if true **/
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				while (*s != '\0')
				{
					putchar ('s');
					s++;
					count++;
				}
			}

			/** to check if format is %(modulo) **/
			else if (*format == '%')
			{
				putchar ('%');
				count++;
			}
			else
			}
				putchar ('%')
				putchar (*format);
				count += 2;
			}
		}
	}
	va_end(args);
 
	return (count);
}
