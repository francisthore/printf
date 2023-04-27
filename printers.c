#include "main.h"

/**
 * print_char - prints a character format
 * @args: va_list of args
 * Return: void
 */

void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * print_string - prints a string format
 * @args: va_list args
 * Return: void
 */

void print_string(va_list args)
{
	int i, j;

	char *str = va_arg(args, char *);

	for (i = 0; str[i] != '\0'; i++);
	for (j = 0; j < i; j++)
		_putchar(str[j]);
}

/**
 * print_percent - prints a % character
 * @args: va_list args
 * Return: void
 */

void print_percent(void)
{
	_putchar('%');
}

/**
 * print_int - prints integers
 * @args: va_list args
 * Return: void
 */

void print_int(va_list args)
{
	print_num(va_arg(args, int));
}

/**
 * print_num - prints a number using recursion
 * @num: number to be printed
 * Return: void
 */

void print_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num != 0)
	{
		print_num(num/10);
		_putchar((num%10) + '0');
	}
}
