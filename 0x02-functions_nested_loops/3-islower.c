#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 * @c: The character to print
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
