#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fibo, nacci;

	fibo = 0;
	nacci = 1;

	do {
		printf("%d\t", fibo);
		fibo = fibo + nacci;
		printf("%d\t", nacci);
		nacci = nacci + fibo;
	} while (nacci < 300);
	printf("\n");

	return (0);
}
