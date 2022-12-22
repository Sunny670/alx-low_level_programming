#include "main.h"
#include <stdio.h>
/**
 *rot13- encorder rot13
 *@s: pointer to string params
 *Return: *s
 */
char *rot13(char *s)
{
int i, j;
char data1[] = "ABCDEFGHIJKLMNOPQSTUWXYZabdcefghiklmnopqrstuwxyz";
char datrot[] = "NOPQRSTUWXYZABCDEFGHIJKLMnopqrstuwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == data1[j])
{
s[i] = datrot[j];
break;
}
}
}
return (s);
}
