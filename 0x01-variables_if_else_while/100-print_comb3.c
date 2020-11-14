#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits
  * Return:0
 */

int main(void)
{
int l, m;
for (l = 0; l < 10; l++)
{
for (m = 0; m < 10; m++)
{
if (m > l)
{
putchar(l + '0');
putchar(m + '0');
if (l != 8 || m != 9)
{
putchar (',');
putchar (' ');
}
}
}
}
putchar('\n');
return (0);
}
