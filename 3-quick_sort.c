#include "sort.h"

/**
 * partition - partition of arrays
 * @array: incoming arrays to sort
 * @first: first index position
 * @last: last index position
 * @size: incoming array size
 * Return: pivot index
 */

int partition(int *array, int first, int last, size_t size)
{
	int i = first - 1, aux, j;

	for (j = first; j <= last - 1; j++)
	{
		if (array[j] < array[last])
		{
			i++;
			if (i < j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[last])
	{
		aux = array[i + 1];
		array[i + 1] = array[last];
		array[last] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * qs - sorts array of integers recursively
 * @array: arrays to be sorted
 * @first: first index position
 * @last: last index position
 * @size: incoming array size
 */

void qs(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		qs(array, first, pivot - 1, size);
		qs(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - using quick sort algorithm to sort array in ascending order
 * @array: incoming array to be sorted
 * @size: incoming array size
 */

void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}
