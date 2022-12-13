#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: zero
 */
int main(void)
{
int a, b, c;
for (a = 48; a < 58; a++)
{
for (b = 49; b < 58; b++)
{
for (c = 50; z < 58; z++)
{
if (c > b && b > a)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 55 || b != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
