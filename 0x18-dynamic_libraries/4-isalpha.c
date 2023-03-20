#include "main.h"
/**
* _isalpha -checks for alphabetic character
* @c: The character to be checked
* Return: 1 for alphabetic character or 0 for everithing else
*/

int _isalpha(int c)

{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{return (1);
}
return (0);
}
