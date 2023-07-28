#include "main.h"
/**
 * printHex - Prints the hexadecimal representation of an unsigned integer.
 *
 * @num: The unsigned integer to print in hexadecimal format.
 * @IsUpper: A flag to determine whether to use
 * uppercase letters (A-F) or lowercase letters (a-f).
 *
 * Return: The number of hexadecimal digits printed.
 */
int printHex(unsigned int num, int IsUpper)
{
	int i, len;
	char *a;
	unsigned int temp;

	temp = num;
	len = 0;
	while (temp)
	{
		temp /= 16;
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
		if (num % 16 < 10)
			a[i] = num % 16;
		else
		{
			if (IsUpper)
				a[i] = num % 16 + 7;
			else
				a[i] = num % 16 + 39;
		}
		num /= 16;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar('0' + a[i]);
	}
	free(a);
	return (len);
}
