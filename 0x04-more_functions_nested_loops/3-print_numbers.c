#include "holberton.h"

/**
 *print_numbers - from 0 to 9
 *@c: number
 *Return:
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar("%d ", i);
	}
	_putchar('\n');
}
