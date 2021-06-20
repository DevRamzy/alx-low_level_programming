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
char i;printf("Capital (upper) case characters:\n"); 
for(i='a'; i<='z'; i++)
printf("%c ",i);
for(i='A'; i<='Z'; i++)
printf("%c ",i);
printf("\n");
return (0);
}
