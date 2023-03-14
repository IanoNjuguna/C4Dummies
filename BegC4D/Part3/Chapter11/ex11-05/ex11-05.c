#include <stdio.h>

/**
 * main - Manipulate variables
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	b = 16;

	printf("Before, a in unassigned and b = %d\n", b);

	a = b++;

	printf("After, a = %d and b = %d\n", a, b);
	return (0);
}

