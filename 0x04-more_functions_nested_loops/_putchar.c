#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: The character to print
 * Return 1 if true, 0 if it false
 * On error, -1 return.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
