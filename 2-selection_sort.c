#include "sort.h"

/**
* selection_sort - Sorts an array of integers in ascending order
* using the Selection sort algorithm.
* @array: The array to be sorted.
* @size: Number of elements in the array.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum, temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)

	{
		minimum = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
			{
				minimum = j;
			}
		}

		if (i != minimum)
		{
			temp = array[i];
			array[i] = array[minimum];
			array[minimum] = temp;
			print_array(array, size);
		}
	}
}
