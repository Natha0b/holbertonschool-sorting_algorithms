#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: variable array
 * @size: variable size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int aux;

	if (array == NULL || size < 1)
		return;
	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				idx = j;
		}

		if (idx != i)
		{
			aux = array[i];
			array[i] = array[idx];
			array[idx] = aux;
			print_array(array, size);
		}
	}
}
