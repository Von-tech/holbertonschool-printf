#include "main.h"
#include "helpers.h"

/**
 * print_char - Prints a character.
 * @args: The argument list containing the character.
 * Return: Number of characters printed.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 * print_string - Prints a string.
 * @args: The argument list containing the string.
 * Return: Number of characters printed.
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (!str)
	str = "(null)";
	while (str[len])
	len++;
	return (write(1, str, len));
}

/**
 * print_percent - Prints a percent sign.
 * @args: The argument list (unused).
 * Return: Number of characters printed.
 */
int print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

/**
 * print_int - Prints an integer.
 * @args: The argument list containing the integer.
 * Return: Number of characters printed.
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	char buffer[12];
	int i = 10;
	unsigned int num;

	if (n < 0)
	{
		count += write(1, "-", 1);
		num = -n;
	}
	else
	{
		num = n;
	}

	buffer[11] = '\0';

	while (num > 0 || i == 10)
	{
		buffer[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}

	return (count + write(1, &buffer[i + 1], 11 - i - 1));
}
