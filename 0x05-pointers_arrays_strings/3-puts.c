#include "holberton.h"

/**
 *_puts - prints string followed by new line
 *@str: string variable
 *
 */
void _puts(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n');
}
