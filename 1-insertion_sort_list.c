#include "sort.h"

/**
 * insertion_sort_list - sorts a list using insertion sort
 * @list: linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *cur, *prev;

	if (list == NULL)
		return;
	head = *list;
	while (head != NULL)
	{
		if (head->prev == NULL)
		{
			head = head->next;
			continue;
		}
		cur = head->next;
		while ((head->prev) && (head->prev->n > head->n))
		{
			prev = head->prev;

			prev->next = head->next;
			if (head->next != NULL)
				head->next->prev = prev;
			head->prev = prev->prev;
			head->next = prev;
			if (prev->prev != NULL)
			{
				prev->prev->next = head;
			}
			else
				*list = head;
			prev->prev = head;
			print_list(*list);
		}
		head = cur;
	}
}
