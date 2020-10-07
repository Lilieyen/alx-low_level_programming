#include "holberton.h"

/**
 *_pow_recursion - function that gives power of x by y
 *@x: parameter 1
 *@y: parameter 2
 *Return: power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
