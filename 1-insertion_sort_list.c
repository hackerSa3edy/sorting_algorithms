#include "sort.h"

void swapNodes(listint_t **Fnode, listint_t **Snode);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 * ascending order using the insertion sort algorithm.
 *
 * @list: The doubly linked list.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *holder = NULL;

	if (!list)
		return;
	if (*list == NULL)
		return;
	if ((*list)->next == NULL)
		return;

	current = *list;
	while (current != NULL)
	{
		while (current->next != NULL)
		{
			if (current->n > current->next->n)
			{
				holder = current->next;
				current->next = holder->next;
				holder->prev = current->prev;

				if (current->prev != NULL)
					current->prev->next = holder;

				if (holder->next != NULL)
					holder->next->prev = current;

				current->prev = holder;
				holder->next = current;

				if (holder->prev != NULL)
					current = holder->prev;
				else
					*list = holder;
				print_list(*list);
			}
			else
				break;
		}
		current = current->next;
	}
}
