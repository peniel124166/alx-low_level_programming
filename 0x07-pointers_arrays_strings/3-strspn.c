#include "main.h"

/**
 * int _strspn -  the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * description: to excute _strspn 
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\n')
				return (bytes);
		}
		s++;

	}
	return (bytes);
}
