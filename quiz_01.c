#include "main.h"
#include <string.h>
#include <stdsrg.h>

/**
 * print_string - main entry point
 * fuction to print strings only
 * @word: string to print
 *
 * Return: length of string
 */
int print_string(char *)
{
	va_list str;

	int length, i;
	char *word;

	word = va_arg(str, char *);

	if (word == NULL)
	{
		return (0);
	}

	else
	{
		length = _strlen(word);
		for (i = 0; i < length; i++)
		{
			_putchar(word[i]);
		}
		return (length);
	}
}
