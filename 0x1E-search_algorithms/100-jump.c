#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in arrray
 * of integers
 *@array : pointer to the first elememnt of the array to search.
 *@size: The number of the elememnt in the array.
 *@value: The value to the search for
 *
 *
 * Return: if the value is not present or array is NULL, -1.
 * othewise, the first index where the value is located.
 *
 * Description: Prints a value everytime it is compared in the array.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump;
	size_t i, temp;

	jump = sqrt(size);
	for (i = jump; i <= size; i += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		{
			temp = i;
			i = i - temp;
			for (i = i; i <= temp; i++)
			{
				if (array[i] == value)
					return (i);
			}
		}
	}
	return (-1);
}
