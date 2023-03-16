#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 * Return: no return
 * void free_dlistint(dlistint_t *head)
 */
void free_dlistint(dlistint_t *head)
{
distint_t *tmp;

if (head != NULL)
	while (head->prev != NULL)
		head = head->prev;
while ((tmp = head) != NULL)
{
head = head->next;
free(tmp);
}
}
