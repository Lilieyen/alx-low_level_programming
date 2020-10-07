#include "holberton.h"

/**
 *_puts_recursion - puts a recursion
 *@s: char
 *Return: value
 */

void _puts_recursion(char *s)
{
  if (s <= 1)
    {
      return 1;
    }
  return s * factorial (s - 1);
}
