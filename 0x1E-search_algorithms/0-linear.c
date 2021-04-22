#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *linear_search - function that searches for a value in an array using LSC
 *@array: pointer to the first element of the array
 *@size: size of no.of elements in the array
 *@value: value to search for
 *Return: first index where value is located or -1 if element is not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int temp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			temp = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, temp);
			if (temp == value)
				return (i);
		}
	}
		return (-1);
}
