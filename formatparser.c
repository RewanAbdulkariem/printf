#include "main.h"
/**
 * formatParser - Parses the main string and processes format 
 * specifiers to print a formatted string
 * @format: full string, including format specifiers.
 * @FunList: An array of structures containing mappings 
 * between format specifiers and conversion functions.
 * @list: list of arguments passed to the program
 * Return: number of characters printed
 */
int formatParser(const char *format, ConvertSt *FunList,va_list list)
{
	int i = 0, NumOfPrinted = 0;
	
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			int j = 0;
			
			while (FunList[j].op != NULL)
			{
				if (format[i + 1] == FunList[j].op[0])
				{
					NumOfPrinted += FunList[j].fun(list);
					break;
				}
				j++;
			}
			if (FunList[j].op == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					NumOfPrinted = NumOfPrinted + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			NumOfPrinted++;
		}
		i++;
	}
	return (NumOfPrinted);
}
