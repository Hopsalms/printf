#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct format
{
	char *ab;
	int (*function)();
} convert;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_%(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hexa(va_list val);
int print_HEXA(va_list val);
int print_string_excl(va_list val);
int print_HEXA_extra(unsigned int num);
int print_pointer(va_list val);
int print_hexa_extra(unsigned long int num);
int print_revs(va_list args);
int print_rot13(va_list args);




#endif
