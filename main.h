#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * struct convert - Struct to store format conversion function pointers.
 *
 * @op: Format specifier (e.g., "%c", "%s", "%d").
 * @fun: Pointer to the corresponding conversion function.
 */
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
int PrintUnsigned(va_list list);
int PrintBinary(va_list list);
int PrintOctal(va_list list);
int PrintLowHex(va_list list);
int PrintUpperHex(va_list list);
int PrintCustomString(va_list list);
int PrintMemoryAddress(va_list list);
int PrintReversed(va_list list);
int PrintROT13(va_list list);
/* helper function */
int _putchar(char c);
int formatParser(const char *, ConvertSt *, va_list);
int integer(int d, int shouldClear);
int UnsignedInteger(unsigned int num, int shouldClear);
int printHex(unsigned long int num, int IsUpper);
#endif
