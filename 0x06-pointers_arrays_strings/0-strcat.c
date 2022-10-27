#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: where copy to
 * @src: where copy from
 * Return: a pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\n')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	return (dest);
}
