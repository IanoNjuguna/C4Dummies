#include <stdio.h>
#include <stdlib.h>
/**
 * main - Making the numbers more Random
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned seed;
	int r, a, b;

	printf("Input a random number seed: ");
	scanf("%u", &seed);
	srand(seed);

	for (a = 0; a < 20; a++)
	{
		for (b = 0; b < 20; b++)
		{
			r = rand();
			printf("%d\t", r);
		}
		putchar('\n');
	}
	return (0);
}

