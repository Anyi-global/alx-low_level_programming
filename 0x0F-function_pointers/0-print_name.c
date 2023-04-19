#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: a pointer to the name variable
 * @f: a function pointer that stores the address of print_name_as_is
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
