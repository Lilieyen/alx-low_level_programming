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
	char memory[98];

	memset(memory, '\0', 98);
	printf("%s\n", memory);

	memset(memory, '0x00', 98);
	printf("%s\n", memory);

	memset(memory, '0x01', 98);
	printf("%s\n", memory);

	return (EXIT_SUCCESS);
}
