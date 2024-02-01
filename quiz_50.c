
#include "main.h"

/**
 * print_S - main entry point
 * @arg: argument
 *
 * Return: to main function
 */
int print_S(va_list arg)
{
	char *string;
	int count, value, i;

	count = 0;
	string = va_arg(arg, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] < 32 || string >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count = count + 2;
			value = string[i];
			if (value < 16)
			{
				_putchar('0');
				count++;
			}
			count = count + print_Sextra(value);

		}
		else
		{
			_putchar(string[i]);
		}
	}
	return (0);
}
