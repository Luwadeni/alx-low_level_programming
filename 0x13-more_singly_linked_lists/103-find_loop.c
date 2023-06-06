#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pamsedi, *ife;

	pamsedi = ife = head;
	while (pamsedi && ife && ife->next)
	{
		pamsedi = pamsedi->next;
		ife = ife->next->next;
		if (pamsedi == ife)
		{
			pamsedi = head;
			break;
		}
	}
	if (!pamsedi || !ife || !ife->next)
		return (NULL);
	while (pamsedi != ife)
	{
		pamsedi = pamsedi->next;
		ife = ife->next;
	}
	return (ife);
}
