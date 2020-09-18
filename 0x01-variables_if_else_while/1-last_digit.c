#include <stdiib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - starting point
 *Description: program to print the last digit of a random number
 *Return: 0
 */


int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
		       }
	else if (last_digit < 6 && last_digit != 0)
	{
			printf("Last digit of %d is %d and is less than 6\n", n, lastDigit);
	}

		return (0);
	}
