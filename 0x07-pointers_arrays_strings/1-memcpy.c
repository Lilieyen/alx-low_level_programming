#include "holberton.h"
#include <stdio.h>

/**
 *_memcpy - copy memory area
 *@dest: pointer to destination address
 *@src: pointer to source address
 *@n: number of bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *from = src;
	char *to = dest;

	for (i = 0; i < n; i++)
	{
		to[i] = from[i];
	}
	return (dest);
}
