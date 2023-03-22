#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Using the time() function to make numbers 100% random
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r, a, b;

	srand((unsigned int) time(NULL));
	for (a = 0; a < 20; a++)
	{
		for (b = 0; b < 5; b++)
		{
			r = rand();
			printf("%d\t", r);
		}
		putchar('\n');
	}
	return (0);
}

