#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
srand(time(0));
int n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive.", n);
else if (n < 0)
printf("%d is negative.", n);
else if (n == 0)
printf("%d is zero.", n);
return (0);
}
