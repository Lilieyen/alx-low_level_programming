#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_search - function that searches for a value in an array using LSC
 *@array: pointer to the first element of the array
 *@size: size of no.of elements in the array
 *@value: value to search for
 *Return: first index where value is located or -1 if element is not found
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, m, r, i;

	if (size == 0 || array == NULL)
		return (-1);

	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
			printf(i < r ? "%d, " : "%d\n", array[i]);
		m = (r + l) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
