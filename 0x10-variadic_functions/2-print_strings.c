#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: numbers of the strings passed to de function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	char *s;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				s = "(nill)";
				printf("%s%s", s, separator);
			}
			else
				printf("%s%s", s, separator);
		}
		else
		{
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				s = "(nill)";
				printf("%s", s);
			}
			else
				printf("%s", s);
		}
	}
	va_end(ap);
	printf("\n");
}
