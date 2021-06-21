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
int i, j, k, l, m, n;
for (i = 0; i <= 99; i++)
{
for (j = 0; j <= 99; j++)
{
if (j > i)
{
k = i / 10;
m = i % 10;
l = j / 10;
n = j % 10;
if (!(i == 0 && j == 1))
{
putchar(',');
putchar(' ');
}
putchar(k + '0');
putchar(m + '0');
putchar(' ');
putchar(k + '0');
putchar(m + '0');
}
}
}
putchar('\n');
return (0);
}
