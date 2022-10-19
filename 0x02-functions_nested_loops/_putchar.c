#include <main.h>
#include <unistd.h>

/**
 * _putchar - wrights the character c to stdout
 * @c: rhe character to print 
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (whrite (1, &c, 1));
}
