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
	unsigned int i = 0;

	while  (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
