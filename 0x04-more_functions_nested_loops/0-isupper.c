#include "holberton.h"
#include <stdio.h>

/**
 *_isupper - checks for uppercase character
 *Return: 1 on true
 *@c: character
 */
int _isupper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
