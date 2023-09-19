#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*specifier(char str))(va_list arg);
int s_hand(va_list param);
int d_hand(va_list param);
int c_hand(va_list param);
int i_hand(va_list param);
int print_int(long digit, int counter);
int _putchar(char c);

#endif
