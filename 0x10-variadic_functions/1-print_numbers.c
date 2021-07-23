#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: counter of the numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i <= n; i++)
	{
		if (i < n - 1)
		{
			printf("%d%s", va_arg(ap, int), separator);
		}
		else if (i == n)
		{
			printf("%d\n", va_arg(ap, int));
		}
	}
	va_end(ap);
}
