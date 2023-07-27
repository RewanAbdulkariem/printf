#include "main.h"

/**
 * PrintChar - Conversion function to print a single character ('%c' format specifier).
 *
 * This function expects an argument of type `int` from the variable argument list (`va_list`).
 * The argument represents the character to be printed. The function calls `_putchar`
 * to print the character to the standard output .
 *
 * @list: argument list containing the character to be printed.
 */

int PrintChar(va_list list)
{
	int i;
	
	i = va_arg(list,int);
	_putchar(i);
	
	return (1);
}

int PrintString(va_list list)
{
	char *s;
	int i ;

	s = va_arg(list,char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	
	return (i);
}
int PrintPrecentage(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}
