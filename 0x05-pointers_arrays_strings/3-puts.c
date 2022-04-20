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
for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}
