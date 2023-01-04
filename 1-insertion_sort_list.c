#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *header;

	if (list == NULL || *list == NULL)
		return;

	header = *list;
	while (header && header->next)
	{
		if (header->n > header->next->n)
		{
			_swap(&header, list);
			print_list(*list);

			while (header && header->prev)
			{

				if (header->n < header->prev->n)
				{
					header = header->prev;

					_swap(&(header), list);

					print_list(*list);
					header = header->next;
				}
				header = header->prev;
			}
		}
		header = header->next;
	}
}
/**
 * _swap - function two nodes of doubly linked list
 * @list: varibale listint_t
 * @node: varibale listint_t
 */
void _swap(listint_t **node, listint_t **list)
{
	listint_t *temp = *node, *temp2, *temp3;

	if (!(*node)->prev)
		*list = (*node)->next;

	temp2 = temp->next;
	temp->next = temp2->next;
	temp3 = temp->prev;
	temp->prev = temp2;
	temp2->next = temp;
	temp2->prev = temp3;

	if (temp2->prev)
		temp2->prev->next = temp2;

	if (temp->next)
		temp->next->prev = temp;

	*node = temp2;
}
