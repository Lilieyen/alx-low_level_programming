#include "holberton.h"

/**
 *print_rev - print in reverse
 *@s: string
 *Return: void
 */

void print_rev(char *s)
{
	int forward;
	int reverse;

	for (forward = 0; s[forward] != '\0'; forward++)
	{
	}
		for (reverse = forward - 1; reverse >= 0; reverse--)
		{
			_putchar(s[reverse]);
		}
	_putchar('\n');
}
