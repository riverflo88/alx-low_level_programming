#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a linked list
 * @head: A pointer to the head node of the list
 * Return: if a loop is found, a pointer to the node
 * where the loop starts, if there is no loop - NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slower = head, *faster = head;

	if (!head)
		return (NULL);
	while (slower && faster && faster->next)
	{
		slower = slower->next;
		faster = faster->next->next;
		if (slower == faster)
		{
			slower = head;
			while (slower != faster)
			{
				slower = slower->next;
				faster = faster->next;
			}
			return (faster);
		}
	}

	return (NULL);
}
