#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
 * @list: linked list to sort.
 *
 * Return: sorted list, otherwise nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_s tp;
	listint_s tn;

	for(; h != NULL; h->next)
	{
		if (h->data > h->next->data)
		{
			tn = h->next;
			tp = h->prev;
			h->next = h->next->next;
			h->next->next = tn;
			h->prev = h->prev->prev;
			h->prev->prev = tp;
			print_list(const listint_t *list)
		} 
	}
