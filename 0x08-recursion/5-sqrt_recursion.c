#include "main.h"

int _sqrt_recursion(int n);
int find_sqrt(int num, int root);

/**
 * _sqrt - recursive square root.
 * @num: find the square root of.
 * @root: The to be tested.
 * Return: If the number has a natural square root -  the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}
