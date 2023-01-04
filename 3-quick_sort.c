#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: variable array
 * @size: variable size
 */

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: variable array
 * @size: variable size
 */

int _partition(int array[], int low, int high)
{

	int pivot = array[high];

	int i = (low - 1);

	for (int j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{

			i++;

			swap(&array[i], &array[j]);
		}
	}

	swap(&array[i + 1], &array[high]);

	return (i + 1);
}

/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: variable array
 * @size: variable size
 */
void quick_sort(int *array, size_t size)
{
	int pi, part;

	if (size <= 0)
	{
		pi = array[size];

		part = _partition(array, pi, size);

		quick_sort(array, size - 1);

		quick_sort(size + 1, array);

		print_array(array, size);
	}
}