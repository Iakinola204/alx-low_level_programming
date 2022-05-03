#include "main.h"
/**
 * _puts - main
 * @str: main
 *
 * Return: void
 */
void _puts(char *str)
{
char *c;
int n;
c = str;
for (n = 0; c[n]; n++)
{
_putchar (c[n]);
}
_putchar('\n');
}
