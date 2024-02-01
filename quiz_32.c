#include "main.h"

/**
 * print_hex - main entry point
 * fuction to print hexadecimal
 * @arg: argument
 *
 * Return: to main
 */
int print_hex(va_list arg)
{
	int i, number, *array;
        unsigned int octa;
        unsigned int temp = number;

        octa = va_arg(arg, unsigned int);
        number = 0;

        while (octa / 16 != 0)
        {
                octa = octa / 16;
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
                array[i] = temp % 16;
                temp / 16;
        }
        for (i = number - 1; i >= 0; i--)
        {
		if(array[i] > 9)
		{
			array[i] = array[i] + 39;
		}
                _putchar(array[i] +'0');
        }
        free(array);
        return (number);
}
