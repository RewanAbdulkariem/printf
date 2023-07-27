#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

typedef struct convert
{
	char op;
	void (*fun)(va_list);
} ConvertSt;

/*a function that produces output according to a format.*/
int _printf(const char *format, ...);
/*print functions moduls*/
int PrintChar(va_list);
int PrintString(va_list);
int PrintPrecentage(va_list);
int _putchar(char c);
 /** Parses the input formatted string and processes format specifiers,
  * invoking the corresponding conversion functions to print the    	  
  * formatted output */ 
int formatParser(const char *, ConvertSt, va_list);

#endif
