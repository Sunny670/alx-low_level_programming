#include "main.h"
/**
 *_strlen_recursion - function prints the length of a string
 *@s: input
 *Return: 0
 */
int _strlen_recursion(char *s)
{
int length = 0;
if (*s)
{
length++;
length += _strlen_recursion(s + 1);
}
return (length);
}
