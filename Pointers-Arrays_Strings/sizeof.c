#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to determine the size of various data types.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n",
	sizeof(float));

	printf("Size of 'variable n' on my computer: %lu bytes\n", sizeof(n));

	return (0);
}

