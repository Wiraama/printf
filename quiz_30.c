#include "main.h"

/**
 * print_unsigned - main entry paoint
 * @arg: argument
 *
 * Return: to main
 */
int print_unsigned(va_list arg)
{
	unsigned int n;
	int number, last, digit, expect;
	int i = 1;

	n = va_arg(arg, unsigned int);
	last = n % 10;
	expect = 1;

	n = n / 10;
	number = n;

	if (last < 0)
	{
		while (number / 10 != 0)
		{
			_putchar('-);
			number = -number;
			n = -n;
			last = -last;
			i++;
		}
		number = n;
		while (expect > 0)
		{
			digit = number / expect;
			_putchar(digit + '0');
			number = number - (digit * expect);
			expect = expect / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
