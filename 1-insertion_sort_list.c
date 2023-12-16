#include "sort.h"

/**
 * insertion_sort_list - sort linked list by insertion method.
 *
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *nnode, *pnode;

	if (*list == NULL || (*list)->next == NULL)
		return;
	tmp = *list;
	while (tmp->prev)
		tmp = tmp->prev;
	while (tmp->next)
	{
		if (tmp->n > tmp->next->n)
		{
			pnode = tmp->prev;
			nnode = tmp->next;
			tmp->next = nnode->next;
			tmp->prev = nnode;
			if (nnode->next)
				nnode->next->prev = tmp;
			if (pnode)
				pnode->next = nnode;
			nnode->next = tmp;
			nnode->prev = pnode;

			if (tmp->prev)
				*list = tmp->prev;
			else
				*list = tmp->next;
			while ((*list)->prev)
				*list = (*list)->prev;

			print_list(*list);
			while (nnode->prev)
			{
				if (nnode->prev->n  > nnode->n)
				{
					pnode = nnode->prev;
					pnode->next = nnode->next;
					nnode->prev = pnode->prev;
					pnode->prev = nnode;
					if (nnode->prev)
						nnode->prev->next = nnode;
					if (pnode->next)
						pnode->next->prev = pnode;
					nnode->next = pnode;

					if (nnode->prev)
						*list = nnode->prev;
					else
						*list = nnode;

					while ((*list)->prev)
						*list = (*list)->prev;

					print_list(*list);
				}
				else
				{
					nnode = nnode->prev;
				}
		}	}
		else
		{
			tmp = tmp->next;
		}

	}
}
