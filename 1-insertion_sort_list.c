#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using the Insertion sort algorithm
 * @list: linked list to sort.
 *
 * Return: sorted list, otherwise nothing
 */

void insertion_sort_list(listint_t **list)
{
        listint_t *current, *temp, *next_node;

        if (list == NULL || *list == NULL || (*list)->next == NULL)
                return;
	for (current = (*list)->next; current != NULL; current = next_node)
	{
		next_node = current->next;
		temp = current;
		while (temp->prev != NULL && temp->prev->n > temp->n)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			if (next_node == temp)
				next_node = temp->next;
			print_list(*list);
		}
	}
}
