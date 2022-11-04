#include <sdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) aegv;
	printf("%i\n", argc - 1);
	return (0);
}
