#ifndef MAIN_H
#define MIAN_H
#include <stdarg.h>

int _putchar(int ch);
void print_char(va_list args);
int _printf(const char * format, ...);
void print_int(va_list args);
void print_percent(void);
void print_ints(int value);
void print_string(va_list args);
void print_int(va_list args);
void print_num(int num);

typedef struct type
{
        char *tp;
        void (*f)(va_list args);
} type_t;

#endif /* MAIN_H */
