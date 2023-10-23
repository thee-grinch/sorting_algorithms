#include "sort.h"
/**
 * bubble_sort - this is an implementation of the bubble sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t  i, j;
	int sorted = 0, tmp;

	if (size < 2 || array == NULL)
		return;
	else
	{
		for (i = 0; i <  size - 1; i++)
		{
			sorted = 0;
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j + 1] < array[j])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					sorted = 1;
					print_array(array, size);
				}
			}
			if (sorted == 0)
				break;
		}
	}
}
