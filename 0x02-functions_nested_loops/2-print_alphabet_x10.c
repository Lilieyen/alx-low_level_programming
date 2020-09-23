#include "holberton.h"
/**
 *print_alphabet_x10 - a functin to print the alphabet 10 times
 *
 *return: void
 */

void print_alphabet_x10(void)
{
	char alpha;

	int x;

	for (x = 0; x < 10; x++)
	{

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
