#include "main.h"

/**
 * print_int - to print integer
 * @arg: argument
 *
 * Return: interger
 */
int print_int(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	int num;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && format[1] != '\0')
		{
			if (format[1] == 'd' || format[1] == 'i')
			{
				num = va_arg(args, int);
				/** print integer directltly **/
				if (num < 0)
				{
					_putchar('-');
					num = -num;
				}
				printed_chars += print_int(num);
				format += 2; /** to jump conversion specifier **/
				continue;
			}
		}
		_putchar(*format);
		printed_chars++;
		format++;
	}
	va_end(args);

	return printed_chars;
}
