#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
