#include "main.h"
/**
 * islower- checks lowercase charactr.
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for everthing else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
