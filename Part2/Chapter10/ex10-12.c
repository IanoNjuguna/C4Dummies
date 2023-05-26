#include "main.h"

/**
 * main - Prompts an argument to the limit() function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;

	printf("Enter a stopping value (0 - 100): ");
	scanf("%d", &s);
	limit(s);
	return (0);
}

/**
 * limit - Confirms match
 * @stop: Value to be passed by main()
 *
 * Return: nothing
 */
void limit(int stop)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		printf("%d\t", x);
		if (x == stop)
		{
			puts("You won!");
			return;
		}
	}
	puts("I won!");
}

