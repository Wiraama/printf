#include "main.h"

/**
 * print_rot - main
 * @arg: argument
 *
 * Return: to main
 */
int print_rot(va_list arg)
{
	char *pointer = va_arg(arg, char *);
	int count = 0;
	char base;
	int i;

	if (pointer == NULL)
	{
		return (-1);
	}
	/** Iterate through each character of the string **/
	for (i = 0; *pointer != '\0'; i++)
	{
		/** applying rot to alphabet **/
		if ((*pointer >= 'A' && *pointer <= 'Z') || (*pointer >= 'a' && *pointer <= 'z'))
		{
			base = (*pointer >= 'a') ? 'a' : 'A';
			*pointer = ((*pointer - base + 13) % 26) + base;
		}
		_putchar (*pointer);
		count++;
	}
	return (count);
}
