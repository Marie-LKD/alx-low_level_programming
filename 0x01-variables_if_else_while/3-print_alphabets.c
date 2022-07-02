#include<stdio.h>
#include<stdlib.h>
/**
*main - entry point
*Description: prints alphabets upper and lower case
*Return: 0
*/
int main(void)
{
char b = 'A';
char c = 'a';
while (c <= 'a')
{
putchar(c);
c++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
