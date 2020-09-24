#include "holberton.h"
#include <stdio.h>

/**
 *_isupper: function that checks for uppercase character
 *@c: uppercase character
 *Return: 1
 */
int _isupper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (1);
}
