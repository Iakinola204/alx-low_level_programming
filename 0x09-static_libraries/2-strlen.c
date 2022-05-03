#include "main.h"
/**
 * _strlen - main
 * @s: main
 *
 * Return: void
 */
int _strlen(char *s)
{
int x;
x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}
