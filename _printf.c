#include "main.h"
#include "helpers.h"

specifier_t *get_specifier(char s)
{
	static specifier_t specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{0, NULL}
	};
	int i = 0;

	while (specifiers[i].fmt)
	{
		if (s == specifiers[i].fmt)
			return (&specifiers[i]);
		i++;
	}
	return (NULL);
}

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	specifier_t *spec;

	if (!format)
		return (-1);

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			spec = get_specifier(format[i + 1]);
			if (spec)
			{
				count += spec->func(args);
				i++;
			}
			else
			{
				count += write(1, &format[i], 1);
			}
		}
		else
		{
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
