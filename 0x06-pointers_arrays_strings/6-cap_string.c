#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: The string
 * Return: The string
 */

char *cap_string(char *str)
{
int i, j;
int capsWord;
char separators[] = ",;.!?(){}\n\t\" ";

for (i = 0, capsWord = 0; str[i] != '\0'; i++)
{
if (str[0] >= 'a' && str[0] <= 'z')
{
capsWord = 1;
}
for (j = 0; separators[j] != '\0'; j++)
{
if (separators[j] == str[i])
capsWord = 1;
}
if (capsWord)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= ('a' - 'A');
capsWord = 0;
}
else if (str[i] >= 'A' && str[i] <= 'Z')
{
capsWord = 0;
}
else if (str[i] >= '0' && str[i] <= '9')
{
capsWord = 0;
}
}
}
return (str);
}

