#include "main.h"

/**
 * print_hexadecimal - main entry point
 * fuction to print hexadecimal
 * @arg: argument
 *
 * Return: to main
 */
int print_hexadecimal(unsigned long int num)
{
	long int i, number, *array;
        unsigned long int temp = number;

        number = 0;

        while (octa / 16 != 0)
        {
                octa = octa / 16;
                number++;
        }
        number++;
        array = malloc(number * sizeof(long int));

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
