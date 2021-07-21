#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - print the name
 * @name: pointer to he name
 * @f: pointer to the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (void);
	(*f)(name);
}
