#include "main.h"

/**
 * _strlen main fuction
 * @str: string pointer
 *
 * Return: to main
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	return (i);
}
/**
 * _strlen_constant - main entry
 * length of constant char type
 * @str: dtring characetr
 *
 * Return: strlen
 */
int _strlen_constant(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{

	}
	return (i);
}
