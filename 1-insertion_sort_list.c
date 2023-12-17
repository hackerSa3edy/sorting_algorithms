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
	listint_t *holder = *list;

	if (!list)
		return;
	if ((*list)->next == NULL)
		return;

	while (holder->next != NULL)
	{
		if ((*list)->n > (*list)->next->n)
		{
			(*list)->prev = (*list)->next;
			holder = (*list)->next;
			if (holder->next != NULL)
				holder->next->prev = *list;
			(*list)->next = holder->next;
			holder->prev = NULL;
			holder->next = *list;
			*list = holder;
			print_list(*list);
		}

		holder = (*list)->next;
		while (holder->next != NULL)
		{
			if (holder->n > holder->next->n)
			{
				/* swap */
				swapNodes(&holder, &holder->next);
				print_list(*list);
				holder = *list;
				break;
			}
			holder = holder->next;
		}
	}
}

/**
 * swapNodes - Swap two lintint_t type Nodes.
 *
 * @F_node: First node.
 * @S_node: Second node.
*/
void swapNodes(listint_t **F_node, listint_t **S_node)
{
	/* Swap two nodes */
	listint_t *Fnode = *F_node, *Snode = *S_node;

	(Fnode->prev)->next = Snode;
	if (Snode->next != NULL)
		(Snode->next)->prev = Fnode;

	Fnode->next = Snode->next;
	Snode->prev = Fnode->prev;

	Snode->next = Fnode;
	Fnode->prev = Snode;
}
