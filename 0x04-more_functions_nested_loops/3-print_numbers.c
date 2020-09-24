#include "holberton.h"

/**
 *print_numbers - from 0 to 9
 *@c: number
 *Return: result
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 1; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
