#include<stdio.h>
#include<stdlib.h>
/**
*main - entry block
*Description: pritns all possible combinations of three digits
*The three digits must be different
*012, 120, 102, 021, 201, 210 are considered
*the same combination of the three digits 0, 1 and 2
*Print only the smallest combination of three digits
*Numbers should be printed in ascending order, with three digits
*Return: 0
*/
int main(void)
{
int a;
int b;
int c = 0;
while (c < 10)
{
b = 0;
while (b < 10)
{
a = 0;
while (a < 10)
{
if (a != b && b != c && c < b && b < a)
{
putchar('0' + c);
putchar('0' + b);
putchar('0' + a);
if (a + b + c != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
a++;
}
b++;
}
c++;
}
putchar('\n');
return (0);
}
