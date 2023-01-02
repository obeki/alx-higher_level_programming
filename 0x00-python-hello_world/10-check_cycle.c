#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list
 *
 * Return: 1 if there is a cycle and 0 if there isn't
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = *fast = list;

	if (list == NULL)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
