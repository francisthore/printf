#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - prints formatted string
 * @format: format string
 * @...: indefinite args
 * Return: void
 */

int _printf(const char * format, ...)
{
	int i, j, len;
	va_list args;

	type_t types[] = {
	{"c", print_char},
	{"s", print_string},
	{"d", print_int},
	{"i", print_int},
	{NULL, NULL}
	};

	for (len = 0; format[len] != '\0'; len++);

	va_start(args, format);

	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			i += 1;

			for (j = 0; j < 4; j++)
			{
				if (format[i] == '%')
				{
					print_percent();
					break;
				}
				if(format[i] == *types[j].tp)
				{
					types[j].f(args);
					break;
				}
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(args);
	return (i);
}

