#include "search_algos.h"

/**
 * linear_skip - searches for value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *skp;

	if (list == NULL)
		return (NULL);

	skp = list;

	do {
		list = skp;
		skp = skp->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)skp->index, skp->n);
	} while (skp->express && skp->n < value);

	if (skp->express == NULL)
	{
		list = skp;
		while (skp->next)
			skp = skp->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)skp->index);

	while (list != skp->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
