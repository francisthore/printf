#include <unistd.h>

/**
 * _putchar - prints a character to stdout
 * @ch: the character
 * Return: int
 */

int _putchar(int ch)
{
	return(write(1, &ch, 1));
}
