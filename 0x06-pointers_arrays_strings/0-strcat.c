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
	char *dest;
	char *src;

		strncat(char *dest, const char *src, size_t n)
	{
		size_t dest_len = strlen(dest);
		size_t i;

		for (i = 0 ; i < n && src[i] != '\0' ; i++)
			dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';

		return (dest);
	}
}
