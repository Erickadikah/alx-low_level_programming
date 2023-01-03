#include "search_algos.h"

/**
 * binary_search - searches for a value in arrray
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

int binary_search(int *array, size_t size, int value)
{
	int i, right, left, mid;

	right = 0;
	left = size - 1;
	mid = (right + left) / 2;

	while  (right <= left)
	{
		if (array[mid] == value)
			return (mid);
		printf("Searching in array:");
		for (i = right; i < left; i++)
		{
			printf("%d,", array[i]);
		}
		printf("%d\n", array[i]);
		if (array[mid] < value)
		{
			right = mid + 1;
			mid = (right + left) / 2;
		}
		else
		{
			left = mid - 1;
			mid = (right + left) / 2;
		}
	}
	return (-1);
}
