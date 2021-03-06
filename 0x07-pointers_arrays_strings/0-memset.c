#include "holberton.h"
#include <stdio.h>

/**
 *_memset - fills memory with a constant byte
 *@s: pointer to memory to be filled
 *@b: character to fill memory area with
 *@n: number of bytes needed
 *Return: pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
