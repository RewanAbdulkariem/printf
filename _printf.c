#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: format is a character string
 * Return: The number of characters printed 
 */
int _printf(const char *format, ...)
{
	int NumPrinted ;
	
	ConvertSt FunList[] = {
		{"c", PrintChar},
		{"s", PrintString},
		{"%", PrintPrecentage},
		{NULL, NULL}
		};
	va_list list;
	
	va_start(list, format);
	
	NumPrinted = formatParser(format, FunList,list);
	
	va_end(list);
	return (NumPrinted);
}
