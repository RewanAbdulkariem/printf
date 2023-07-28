#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

typedef struct convert
{
	char *op;
	int (*fun)(va_list);
} ConvertSt;

/*a function that produces output according to a format.*/
int _printf(const char *format, ...);
/*print functions moduls*/
int PrintChar(va_list list);
int PrintString(va_list list);
int PrintPrecentage(va_list list);
int PrintInt(va_list list);
int _putchar(char c);
 /** Parses the input formatted string and processes format specifiers,
  * invoking the corresponding conversion functions to print the    	  
  * formatted output */ 
int formatParser(const char *, ConvertSt *, va_list);
int integer(int d);
#endif
