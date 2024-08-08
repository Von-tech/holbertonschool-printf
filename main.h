#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>


int _printf(const char *format, ...);

typedef struct specifier
{
	char fmt;
	int (*func)(va_list args);
} specifier_t;

#endif
