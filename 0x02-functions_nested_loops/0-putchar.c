#include<stdio.h>
/**
*main - prints putchar
*
*Return: 0 Success
*/
int main(void)
{
char word[8] = "_putchar";
int i;
for (i = 0; i <= 7; i++)
{
putchar(word[i]);
}
putchar('\n');
return (0);
}