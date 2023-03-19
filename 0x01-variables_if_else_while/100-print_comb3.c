#include <stdio.h>
/**
 * main - main entry
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 0; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
