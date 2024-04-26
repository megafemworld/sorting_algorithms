#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using the Insertion sort algorithm
 * @list: linked list to sort.
 *
 * Return: sorted list, otherwise nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_s tp;
	listint_s tn;
	listint_s c;

	for(; list != NULL; *list->next)
	{
		c = *list->prev;
		while (c != NULL)
		{
			if (*list->data < c->data)
			{
				tn = *list->next;
				tp = c;
				c->next = tn;
				c->prev = c->next;
				*list->next = *list->prev;
				*list->prev = tp
				print_list(const listint_t *list);
			}
			c = *list->prev;
		}	
	}
