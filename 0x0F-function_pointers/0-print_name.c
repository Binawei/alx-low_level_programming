#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: a function pointer to print_name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
