#include<stdio.h>
#include<stdlib.h>
/**
*main -entry block
*Description: prints base16 numbers in lowercase
*Return: 0
*/
int main(void)
{
char c;
char d = '0';
while (d <= '9')
{
putchar(d);
d++;
}
for(c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
