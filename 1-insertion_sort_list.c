#include "sort.h"

/**
 * insertion_sort_list - sorts a list using insertion sort
 * @list: linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head = *list, *cur, *temp;

	while (head != NULL)
	{
		if (head->prev == NULL)
		{
			head = head->next;
			continue;
		}
		cur = head;
		while (head->prev->n > head->n)
		{
			temp = head;
			head = head->prev;
			head->prev = temp;
			print_list(*list);
		}
		head = cur->next;
	}
}
