#include "main.h"
#include <stddef.h>
/**
*_strpbrk - function that searches a string for any set of bytes
*@s: the string
*@accept: set of bytes
*Return: pointer to the byte in s that matches one of the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int a;
unsigned int b;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
return (&s[a]);
}
}
return (NULL);
}
