#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

	typedef void (*print_fn_t)(va_list, int *);

	print_fn_t get_print_fn(char c);

	int _putchar(char c);

	int _puts(char *st);

	int _printf(const char *format, ...);

	size_t _strlen(const char *s);

	int count_digits(int n);

	void print_char(va_list args, int *count);

	void print_string(va_list args, int *count);

	void print_integer(va_list args, int *count);

	void print_percent(va_list args __attribute__((unused)), int *count);

	void print_null(va_list args __attribute__((unused)), int *count);

#endif
