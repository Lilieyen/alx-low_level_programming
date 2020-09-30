#include "holberton.h"

/**
 *print_rev - print in reverse
 *@s: string
 *Return: void
 */

void print_rev(char *s)
{
	int fwd;
	int rev;

	for (fwd = 0; s[fwd] != '\0'; fwd++)
	{
	}
		for (rev = fwd - 1; rev >= 0; rev--)
		{
			_putchar(s[rev]);
		}
	_putchar('\n');
}
