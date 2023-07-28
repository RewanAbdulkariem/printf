#include "main.h"
/**
 * PrintMemoryAddress - Prints the address of a pointer in hexadecimal format.
 *
 * @list: A variable argument list containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int PrintMemoryAddress(va_list list)
{
	void *ptr;
	unsigned long int address;
	int len;

	ptr = va_arg(list, void *);
	
	if (ptr == NULL)
	{
		len = _printf("(nil)");
		return (len);
	}
	address = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	len = printHex(address, 0) + 2;

	return (len);
}
