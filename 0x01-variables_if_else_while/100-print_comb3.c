#include <stdio.h>

/**
* main - entry point
* Description -prints all possible different combinations of two digits.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b;
for (a = 01; a <= 89; b++)
{
for (b = 02; b <= 88; b++)
{
if (b > a)
{
putchar(a);
putchar(b);
if (a != 89 || b != 88)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
