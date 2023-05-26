#include <stdio.h>

/**
 * main - Find modulus
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int const value = 5;
	int a;

	printf("Modulus %d:\n", value);
	for (a = 0; a < 30; a++)
	{
		printf("%d %% %d = %d\n", a, value, (a % value));
	}
	return (0);
}

