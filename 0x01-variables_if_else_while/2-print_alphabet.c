#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
printf("%c ", ch);
ch++;
}
printf("\n");
return 0;  
}
