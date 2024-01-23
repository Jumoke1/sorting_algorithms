#include "sort.h"

/**
 *swap_list - a funtion to swap two nodes
 *@h:  pointer to the head of the double -linked list
 *@data1: the first node
 *@data2: the second node
 */
void swap_list(listint_t **h, listint_t **data1, listint_t *data2)
{
	listint_t *temp = *data1;

	temp->next = data2->next;
	if (data2->next != NULL)
		data2->next->prev = temp;
	data2->prev = temp->prev;
	data2->next = temp;
	if (temp->prev != NULL)
		temp->prev->next = data2;

	else
		*h = data2;

	temp->prev = data2;
	*data1 = data2->prev;
}

/**
 * insertion_sort_list - a function using insertion sort to sort integers
 * @list: the list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
listint_t *next_data, *temp2, *temp1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

	for (next_data = (*list)->next; next_data != NULL; next_data = temp1)
	{
	temp1 = next_data->next;
	temp2 = next_data->prev;

	while (temp2 != NULL && next_data->n < temp2->n)
	{
	swap_list(list, &temp2, next_data);

	print_list(*list);
	}
	}
}
