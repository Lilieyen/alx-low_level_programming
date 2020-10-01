#include "holberton.h"
#include <stdio.h>

/**
 *_strncat - concatenates two strings
 *@dest: pointer
 *@src: pointer
 *@n: integer
 *Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int last;

	len = 0;
	for (; dest[len] != '\0'; len++)
		;
	last = 0;
	for (; src[last] != '\0' && last < n; last++, len++)
	{
		dest[len] = src[last];
	}
	return (dest);
}
