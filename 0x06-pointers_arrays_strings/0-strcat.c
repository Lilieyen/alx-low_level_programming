#include "holberton.h"
#include <stdio.h>

/**
 *_strcat - concatenates two strings
 *@dest: character
 *@src: source
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int last;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	for (last = 0; src[last] != '\0'; last++, len++)
	{
		dest[len] = src[last];
	}
	dest[len] = '\0';
	return (dest);
}
