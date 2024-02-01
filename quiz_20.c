#include "main.h"

/**
 * int print_binary - main entry point\
 * convert to binary
 *
 * Return: binary
 */
int print_binary(int *binary, ...)
{
	va_list args;

	int flag, number, a, b, i;
	unsigned int dec = va_arg(arg, int);
	unsigned int temp;

	flag = 0;

	va_start(arg, *binary);

	for (i = 0; i < 32; i++) /** 32 represent 32-bit machine **/
	{
		a = 1;
		temp = ((a << (32 - i)) & num); /** calculate bit mask **/
		if (temp >> (31 - i)) /** to check if it is set **/
		{
			flag = 1;
			if (flag)
			{
				number = 0;
				b = temp >> (31 - i);
				_putchar(b + 48);
				number++;
			}

		}
		if (number == 0)
		{
			number++;
			_putchar('0');
		}
		return (number);
	}
	va_end(arg);
}
