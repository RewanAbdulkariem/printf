#include "main.h"
/**
 * PrintCustomString - Prints a custom-formatted string with
 * escape sequences for non-printable ASCII characters.
 *
 * @list: A variable argument list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int PrintCustomString(va_list list)
{
	char *s;
	char a[8];
	int i, j, num, len = 0;

	s = va_arg(list, char *);
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			num = (int)s[i];
			for (j = 0; j < 2; j++)
			{
				if (num == 0)
				{
					_putchar('0');
					break;
				}
				else if (num % 16 < 10)
					a[j] = num % 16;
				else
					a[j] = num % 16 + 7;
				num /= 16;
			}
			for (j -= 1; j >= 0; j--)
			{
				_putchar('0' + a[j]);
			}
			len += 4;
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
/**
 * PrintReversed - Pprints the reversed string
 *
 * @list: A variable argument list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int PrintReversed(va_list list)
{
	char *s;
	int i, len;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	;
	len = i;
	for (i = len - 1; s[i] != '\0'; i--)
		_putchar(s[i]);
	return (len);
}
