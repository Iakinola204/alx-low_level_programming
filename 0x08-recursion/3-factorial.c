#include "main.h"
/**
 * factorial - main
 * @n: main
 * Return: factorial
 */
int factorial(int n)
{
if (n == 0) /*Base condition*/
return (1);
else if (n < 0) /*Base condition*/
return (-1);
else
return (n * factorial(n - 1)); /*Recursive call*/
}
