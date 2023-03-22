#include <stdio.h>
#include <stdlib.h>
/**
 * main - Display 100 Random Values
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int r, a, b;

	puts("100 Random Numbers");
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

