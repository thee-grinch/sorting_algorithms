#include "sort.h"

/**
* quick_sort - Sorts an array of integers in ascending order using Quick sort
* @array: The array to be sorted
* @size: Number of elements in the array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
	{
		return;
	}
	quicksort_recursive(array, 0, size - 1, size);
	print_array(array, size);
}

/**
* quicksort_recursive - Recursive function to perform Quick sort
* @array: The array to be sorted
* @start: The start index of the partition
* @end: The end index of the partition
* @size: Number of elements in the array
*/
void quicksort_recursive(int *array, int start, int end, size_t size)

{
	if (start < end)
	{
		int partition_index = lomuto_partition(array, start, end);

		quicksort_recursive(array, start, partition_index - 1, size);
		quicksort_recursive(array, partition_index + 1, end, size);
		print_array(array, size);
	}
}

/**
* lomuto_partition - Lomuto partition scheme for Quick sort
* @array: The array to be partitioned
* @start: The start index of the partition
* @end: The end index of the partition
* Return: The pivot index
*/
int lomuto_partition(int *array, int start, int end)
{

	int part_index, i, pivot;

	pivot = array[end];
	part_index = start - 1;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			part_index++;
			swap(&array[part_index], &array[i]);
		}
	}
	part_index++;
	swap(&array[part_index], &array[end]);
	return (part_index);
}

/**
* swap - Swaps two integers
* @a: Pointer to the first integer
* @b: Pointer to the second integer
*/
void swap(int *a, int *b)
{
	if (a != b)
	{
		int temp = *a;

		*a = *b;
		*b = temp;
	}
}
