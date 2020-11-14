#include <stdio.h>

/**
 * main -  prints all possible different combinations of three digits
 * Return:0
 */

int main(void)
{
int l, m, n;
for (l = 0; l < 10; l++)
{
for (m = 0; m < 10; m++)
{
for (n = 0; n < 10; n++)
{
if (m > l && n > m)
{
putchar(l + '0');
putchar(m + '0');
putchar(n + '0');
if (l != 7 || m != 8 || n != 9)
{
putchar (',');
putchar (' ');
}
}
}
}
}
putchar('\n');
return (0);
}
