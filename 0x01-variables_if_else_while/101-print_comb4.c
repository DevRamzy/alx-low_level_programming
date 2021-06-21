#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
if (k > j && j > i)
{
if (!(i == '0' && j == '1' && k == '2'))
{
putchar(',');
putchar(' ');
}
putchar(i);
putchar(j);
putchar(k);
}
}
}
}
putchar('\n');
return (0);
}
