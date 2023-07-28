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
int integer(int d, int shouldClear)
{
	static int len = 0;
	unsigned int num;
	
	if (shouldClear)
	{
       	len = 0;
        }
	if (d < 0)
	{
		_putchar('-');
		
		num = -d;
		len++;
	}
	else 
		num = d;
	if (num < 10)
	{
		_putchar('0' + num);
		len++;
	}
	else
	{
		integer(num / 10, 0);
		_putchar('0' + (num % 10));
		len++;
	}
	return (len);
}
int PrintInt(va_list list)
{
	int d;
	
	d = va_arg(list, int);
	return (integer(d, 1));
}
	

