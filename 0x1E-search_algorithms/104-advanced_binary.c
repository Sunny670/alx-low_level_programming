#include "search_algos.h"

/**
 * rec_search - searches for value in an array of
 * integers using Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of array
 * @value: value to search in
 * Return: index of  number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls to rec_search to return
 *  index of number
 *
 * @array: input array
 * @size: size of array
 * @value: value to search in
 * Return: index of number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int indx;

	indx = rec_search(array, size, value);

	if (indx >= 0 && array[indx] != value)
		return (-1);

	return (indx);
}
