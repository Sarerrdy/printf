#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*specifier(char str))(va_list arg);
int s_handler(va_list arg);
int d_handler(va_list arg);
int c_handler(va_list arg);
int i_handler(va_list arg);
int print_int(long num, int count);
int _putchar(char c);

#endif
