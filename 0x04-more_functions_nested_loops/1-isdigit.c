#include "holberton.h"

/**
 *_isdigit - function that checks for a digit
 *@c: digit
 *Return: 1 on true
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 10)
	{
		return (1);
	}
	else
		return (0);
}