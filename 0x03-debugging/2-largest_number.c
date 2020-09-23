#include "holberton.h"

/**
 *largest_number - prints the largest of three integers
 *@a: first interger
 *@b: second interger
 *@c: third interger
 *Return largest number
 */

int largest_number(int a, int b, int c)
{

	if (a >= b && a >= c)
	{
		return (a);
	}
	else if (b >= a && b >= c)
	{
		return (b);
	}
	else if (c >= b && c >= a)
	{
		return (c);
	}
	else
	{
		return (c);
	}
}
