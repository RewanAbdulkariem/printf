#include "main.h"
/**
 * PrintBinary - Prints the binary representation of an unsigned integer.
 *
 * @list: A variable argument list containing the unsigned integer to print.
 *
 * Return: The number of binary digits printed.
 */
int PrintBinary(va_list list)
{
	int i, len;
	char a[32];
	unsigned int num;

	num = va_arg(list, unsigned int);
	for (i = 0; num > 0; i++)
	{
		if (num % 2)
			a[i] = '1';
		else
			a[i] = '0';
		num /= 2;
	}
	len = i;
	for (i -= 1; i >= 0; i--)
	{
		putchar(a[i]);
	}
	return (len);
}
