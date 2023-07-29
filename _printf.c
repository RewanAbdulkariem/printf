#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: format is a character string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int NumPrinted;


	ConvertSt FunList[] = {
		{"c", PrintChar},
		{"s", PrintString},
		{"%", PrintPrecentage},
		{"d", PrintInt},
		{"i", PrintInt},
		{"b", PrintBinary},
		{"u", PrintUnsigned},
		{"o", PrintOctal},
		{"x", PrintLowHex},
		{"X", PrintUpperHex},
		{"S", PrintCustomString},
		{"p", PrintMemoryAddress},
		{"r", PrintReversed},
		{NULL, NULL}
		};
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	NumPrinted = formatParser(format, FunList, list);

	va_end(list);
	return (NumPrinted);
}
