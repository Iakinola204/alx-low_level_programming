#include "main.h"
/**
 * _memcpy - main
 * @dest: main
 * @src: main
 * @n: main
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)  /*Declaring WHILE*/
{
*(dest + i) = *(src + i); /*add 1 position dest and src*/
i++;
} /*END WHILE*/
return (dest);
}
