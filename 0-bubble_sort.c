#include "sort.h"

/**
 * bubble_sort - simple sorting algorithm
 * @array: The array
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int step, i=0, temp;

	for (step = 0; step < size - 1; ++step)
	{
		for (i = 0; i < size - step - 1; ++i)
		{	
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			
		}
		
	}
}
