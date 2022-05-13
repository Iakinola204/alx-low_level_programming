#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - main
 * @name: main
 * @f: main
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
