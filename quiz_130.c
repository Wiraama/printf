#include "main.h"

/**
 * print_rev - maoin entry point
 * @arg: argument
 *
 * Return: to main
 */
int print_rev(va_list arg)
{
	char *pointer = va_arg(arg, char *);
	int i, count;

	count = 0;
	if (pointer == NULL) /** pointer is null **/
	{
		return (-1);
	}
	/** find the lenghth of string **/
	while (pointer[count] != '\0')
	{
		count++;
	}
	/** print string in reverse **/
	for (i = count - 1; i >= 0; i--)
	{
		_putchar (pointer[i]);
	}
	return (count);
}
