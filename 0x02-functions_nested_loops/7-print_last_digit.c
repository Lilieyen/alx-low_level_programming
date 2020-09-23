#include "holberton.h"
/**
 *print_last_digit - last digit
 *@n: int
 *
 *Return: last digit
 */
int print_last_digit(int)
{
	int a;

	if (n < 0)
	{
		a = -1 * (n % 10);
		_putchar(a + '0');
		return (a);
	}
	else
	{
		mv = n % 10;
		return (a);
	}
}
