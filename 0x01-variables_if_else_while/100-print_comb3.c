#include<stdio.h>
#include<stdlib.h>
/**
*main- entry block
*Description: prints all possible combinations of two digits
*Numbers must be separated by ,, followed by a space
*The two digits must be different
*01 and 10 are considered the same combination of the two digits 0 and 1
*Print only the smallest combination of two digits
*Numbers should be printed in ascending order, with two digits
*Return: 0
*/
int main(void)
{
int c;
int b = 0;
while (b < 10)
{
c = 0;
while (c < 10)
{
if (b != c && b < c)
{
putchar('0' + b);
putchar('0' + c);
if (c + b != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
b++;
}
putchar('\n');
return (0);
}
