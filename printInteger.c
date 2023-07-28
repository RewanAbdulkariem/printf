#include "main.h"
/**
 * integer - Recursive utility function to print an integer in decimal format.
 *
 * This function takes an integer 'd' and a flag 'shouldClear' as arguments.
 * It recursively prints the integer to the standard output in decimal format.
 * If 'shouldClear' is set to 1, it resets the static variable 'len' to 0.
 *
 * @d: The integer to be printed.
 * @shouldClear: A flag to indicate whether the static variable 'len'
 * should be reset (1) or not (0).
 * Return: The number of printed characters.
 */
int integer(int d, int shouldClear)
{
	static int len;
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
/**
 * UnsignedInteger - Prints the decimal representation of an unsigned integer.
 *
 * @num: The unsigned integer to print.
 * @shouldClear: A flag indicating whether to clear the static length counter.
 *
 * Return: The total number of characters printed for this call.
 */
int UnsignedInteger(unsigned int num, int shouldClear)
{
	static int len;

	if (shouldClear)
	{
		len = 0;
	}

	if (num < 10)
	{
		_putchar('0' + num);
		len++;
	}
	else
	{
		UnsignedInteger(num / 10, 0);
		_putchar('0' + (num % 10));
		len++;
	}
	return (len);
}
