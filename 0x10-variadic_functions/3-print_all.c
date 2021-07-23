#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format:list of types of arguments passed
 *  to the function
 * Return: void
 */
void print_all(const char *const format, ...)
{
	char *argument;
	char *spc = "";
	int i = 0;

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':;
				printf("%s%c", spc, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", spc, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", spc, va_arg(ap, double));
				break;
			case 's':
				argument = va_arg(ap, char *);
				if (argument == NULL)
					argument = "(nil)";
				printf("%s%s", spc, argument);
				break;
			default:
				i++;
				continue;
			}
			spc = ", ";
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
