#include <stdio.h>
/**
 * main - a program that prints the size of various types
 *
 * Return: Always 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long int d;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
