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
	char *a;
	unsigned int num, temp;

	num = va_arg(list, unsigned int);
	temp = num;
	len = 0;
	while (temp)
	{
		temp >>= 1;
		len++;
	}
	a = malloc(len * sizeof(char));
	if (a == NULL)
		return (-1);
		
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	for (i = 0; num > 0; i++)
	{
		if (num % 2)
			a[i] = '1';
		else
			a[i] = '0';
		num /= 2;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
	free(a);
	return (len);
}
