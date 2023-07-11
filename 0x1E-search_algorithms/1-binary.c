#include "search_algos.h"

/**
 * recursive_search - searches a value in an array of
 * integers using Binary search algorithm
 *
 *
 * @array: input array
 * @size: size of array
 * @value: value to search in
 * Return: index of number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t hlf = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (hlf && size % 2 == 0)
		hlf--;

	if (value == array[hlf])
		return ((int)hlf);

	if (value < array[hlf])
		return (recursive_search(array, hlf, value));

	hlf++;

	return (recursive_search(array + hlf, size - hlf, value) + hlf);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
