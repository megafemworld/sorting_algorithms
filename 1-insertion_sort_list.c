#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using the Insertion sort algorithm
 * @list: linked list to sort.
 *
 * Return: sorted list, otherwise nothing
 */

void insertion_sort_list(listint_t **list)
{
        listint_t *current;
        listint_t *prev_node;
        listint_t *next_node;

        if (list == NULL || *list == NULL || (*list)->next == NULL)
                return;
        current = (*list)->next;
        while (current != NULL)
        {
                prev_node = current->prev;
                next_node = current->next;
                while (prev_node != NULL && prev_node->n > current->n)
                {
                        prev_node = prev_node->prev;
                }
                if (prev_node != current->prev)
                {
                        current->prev->next = next_node;
                        if (next_node != NULL)
                                next_node->prev = current->prev;
                        if (prev_node == NULL)
                        {
                                current->next = *list;
                                current->prev = NULL;
                                (*list)->prev = current;
                                *list = current;
                        }
                        else
                        {
                                prev_node->next->prev = current;
                                current->next = prev_node->next;
                                prev_node->next = current;
                                current->prev = prev_node;
                        }
                        print_list(*list);
                }
                current = next_node;
        }
}
