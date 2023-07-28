#include "main.h"

/**
 * PrintChar - Conversion function to print a single character
 * ('%c' format specifier).
 *
 * This function expects an argument of type `int`
 * The argument represents the character to be printed.
 *
 * @list: argument list containing the character to be printed.
 * Return: 1 as number of printedchar.
 */

int PrintChar(va_list list)
{
	int i;

	i = va_arg(list, int);
	_putchar(i);

	return (1);
}
/**
 * PrintString - Conversion function to print a string
 * ('%s' format specifier).
 *
 * This function expects an argument of type `char *`
 * The argument represents the string to be printed.
 * If the input string is NULL, it prints "(null)" instead.
 *
 * @list: argument list containing the string to be printed.
 * Return: number of printedchar.
 */
int PrintString(va_list list)
{
	char *s;
	int i;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
/**
 * PrintPrecentage - Conversion function to print the '%' character
 * ('%%' format specifier)
 *
 * This function does not require any arguments
 *
 * @list: unused argument list.
 * Return: 1 as the number of printed characters.
 */
int PrintPrecentage(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}
/**
 * PrintInt - Conversion function to print an integer
 * ('%d' format specifier)
 *
 * This function takes a single integer argument from
 * the variable argument list
 * and prints it to the standard output in decimal format.
 *
 * @list: A va_list that holds the variable argument list.
 * Return: The number of printed characters.
 */
int PrintInt(va_list list)
{
	int d;

	d = va_arg(list, int);
	return (integer(d, 1));
}
int PrintUnsigned(va_list list)
{
	unsigned int d;

	d = va_arg(list, unsigned int);
	return (UnsignedInteger(d, 1));
}
