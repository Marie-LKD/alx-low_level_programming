#include<stdio.h>
#include<stdlib.h>
/**
*main - entry block
*Description: print numbers from 0 to 9
*Return: 0
*/
int main(void)
{
int c = 0;
while(c < 10)
{
putchar(48 + c);
c++;
}
putchar('\n');
return (0);
}
