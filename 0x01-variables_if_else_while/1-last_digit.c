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
int n, lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastDigit = n % 10;
if (lastDigit > 5) 
{
printf("Last digit of n is %d and is greater than 5" );
}else if(lastDigit == 0)
{
printf("Last digit of n is %d and is 0" );
}else if(lastDigit < 6 && 0)
{
printf("Last digit of n is %d and is less than 6 and not 0" );
}
return (0);
}
