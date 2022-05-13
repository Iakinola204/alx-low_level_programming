#include <stdio.h>
/**
 * array_iterator - main
 * @array: main
 * @size: main
 * @action: main
 * Return: main
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size && action)
{
for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
}
