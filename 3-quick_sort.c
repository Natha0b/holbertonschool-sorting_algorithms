#include "sort.h"

/**
 * _swapnode - swaps two values in an array
 * @array: data to sort
 * @i: first value
 * @j: second value
 * @size: size of data
 */
void _swapnode(int *array, int i, int j, int size)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
		print_array(array, size);
	}
}

/**
 * _partition - sorts a partition of data in relation to a pivot
 * @array: variable integer string
 * @low: variable integer
 * @high: variable integer
 * @size: size of data
 * Return: return integer
 */
int _partition(int *array, int low, int high, size_t size)
{

	int i = low, j, pivot = array[high];

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			_swap_node(array, i, j, size);
			i++;
		}
	}
	_swap_node(array, i, high, size);

	return (i);
}

/**
 * quicksort -  sorts an array of integers in ascending order using the
 * Quick sort algorithm Lomuto partition scheme
 * @array: data to sort
 * @low: variable integer
 * @high: variable integer
 * @size: size of data
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}
/**
 * quick_sort - function that sorts an array of integers in ascending order
 * @array: variable array
 * @size: variable size
 */
void quick_sort(int *array, size_t size)
{

	if (size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
