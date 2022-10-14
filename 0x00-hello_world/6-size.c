#include <stdio.h>
/**
 * main - prints the size of various types on the computer
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long  int c;
	long long int d;
	float f;
	
	printf("size of a char: %iu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %iu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %iu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %iu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %iu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
