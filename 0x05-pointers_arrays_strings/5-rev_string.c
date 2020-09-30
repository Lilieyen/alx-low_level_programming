#include "holberton.h"

/**
 *rev_string - reverse a string
 *@s: character string
 *Return: void
 */

void rev_string(char *s)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; a > b; b++, a--)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
	}
