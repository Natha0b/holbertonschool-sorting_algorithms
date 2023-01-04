#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: The array
 */
void insertion_sort_list(listint_t **list)
{
	unsigned int i;
	listint_t *temp;

	if (list != NULL)
	{

		for (i = 0; list[i] != NULL; ++i)
			if (list[i] > list[i + 1])
			{
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
				print_list(temp);
			}
	}
}
