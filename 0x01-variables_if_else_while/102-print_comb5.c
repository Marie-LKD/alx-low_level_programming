#include<stdio.h>
#include<stdlib.h>
/**
*main - entry block
*Description: prints all possible combinations of two didgit numbers
*The numbers should range from 0 to 99
*The two numbers should be separated by a space
*All numbers should be printed with two digits. 1 should be printed as 01
*The combination of numbers must be separated by comma, followed by a space
*The combinations of numbers should be printed in ascending order
*00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
*Return: 0
*/
int main(void)
{
int j, i;
for (j = 0; j <= 99; j++)
{
for (i = j; i <= 99; i++)
{
if (i != j)
{
putchar(j / 10 + 48);
putchar(j % 10 + 48);
putchar(' ');
putchar(i / 10 + 48);
putchar(i % 10 + 48);
if (j * 100 + i != 9899)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
