#include <stdio.h>
#include <unistd.h>
/**
 * main - A progrm that prints a line to the std error
 *
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korapar, 2015-10-19\n",
	59);
	return (1);
}
