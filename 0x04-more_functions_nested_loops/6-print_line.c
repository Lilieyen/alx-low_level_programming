#include "holberton.h"

/**
 *print_line - draws a straight line in the terminal
 *@n: parameter
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = o; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
