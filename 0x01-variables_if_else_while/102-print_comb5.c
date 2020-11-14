#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 * Return:  0.
 */
int main(void)
{
int l;
int m;

for (l = 0; l <= 98; l++)
{
for (m = l + 1; m <= 99; m++)
{
putchar((l / 10) + '0');
putchar((l % 10) + '0');
putchar(' ');
putchar((m / 10) + '0');
putchar((m % 10) + '0');
if (l == 98 && m == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
