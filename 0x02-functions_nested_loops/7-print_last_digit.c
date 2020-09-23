#include "holberton.h"
/**
 *print_last_digit - last digit
 *@a: int
 *
 *Return: last digit
 */
int print_last_digit(int a)

{
	int a;

	if (a < 0)
	{
		a = a * (-1);
	}
		_putchar(a + '0');
		return (a);
	}
