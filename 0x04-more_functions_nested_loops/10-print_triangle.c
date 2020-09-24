#include "holberton.h"

/**
 *print_triangle - prints a triangle
 *@i - parameter
 *Return: result
 */
void print_triangle(int size)
{
	for (int i = 1; i <= rows; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			_putchar('#');
		}
	}
		_putchar('\n');
	}
