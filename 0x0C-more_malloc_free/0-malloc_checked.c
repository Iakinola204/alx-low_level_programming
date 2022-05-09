#include "main.h"
/**
 * malloc_checked - main
 * @b: main
 * Return: main
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
