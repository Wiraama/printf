#include "main.h"

/**
 * print_octa - main entry point
 * function to print octal decimal
 * @arg: argument
 *
 * Return: to main
 */
int print_octa(va_list arg)
{
	int i, number, *array;
	unsigned int octa;
	unsigned int temp = number;

	octa = va_arg(arg, unsigned int);
	number = 0;

	while (octa / 8 != 0)
	{
		octa = octa / 8;
		number++;
	}
	number++;
	array = malloc(number * sizeof(int));

	/** cornfirming memory allocation **/
	if (array == NULL)
	{
		return (NULL);
	}

	/** allocating memory to every array **/
	for (i = 0; i < number; i++)
	{
		array[i] = temp % 8;
		temp / 8;
	}
	for (i = number - 1; i >= 0; i--)
	{
		_putchar(array[i] +'0');
	}
	free(array);
	return (number);
}
