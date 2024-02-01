#include "main.h"

/** print_pointer - main entry point
 * @arg: argument
 *
 * Return: to main fuction
 */
int print_pointer(va_list arg)
{
	void *pointer;
	char *pointer0 = "(nil)";
	int i, convert;
	long int number;

	pointer = va_arg(arg, void*);

	/** checking if pointr0 if null **/
	if (pointer == NULL)
	{
		/** loop to to print value in pointer0 **/
		for (i = 0; pointer0[i] != '\0'; i++)
		{
			_putchar (pointer0[i]);
		}
		return (i);
	}
	/** converting to hexadecimal //pointers are in hex **/
	number = (unsigned long int)pointer; /** this is in form of long int **/
	_putchar ('0');
	_putchar ('x');
	/** fuction to convert **/
	convert = print_hexdecimal(convert);
	return (convert + 2); /** 2 reps 0 and x**/
}
