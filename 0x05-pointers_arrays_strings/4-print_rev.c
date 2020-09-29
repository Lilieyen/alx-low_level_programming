#include "holberton.h"

/**
 *print_rev - print in reverse
 *@s: string
 *Return: voi
 */

void print_rev(char *s)
{
	int forward, reverse;

	for (forward = 0; s[forward] != '\0'; forward++)
	{
		for (reverse = forward - 1; reverse >= s[forward - 1]; reverse--)
		{
			putchar(s[reverse]);
		}
	}
	putchar('\n');
}
