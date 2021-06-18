#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char l;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (l = 'a'; l < 'g'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
