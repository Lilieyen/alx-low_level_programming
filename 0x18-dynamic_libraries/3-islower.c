#include "holberton.h"

/**
 *_islower - a fuction to check whether the given char is lowercase
 *@c: argument
 *Return: 1 for true, else 0
 */

int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
		return (0);

}
