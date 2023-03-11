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
	verify(s);
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

/**
 * verify - Checks whether the number is betwixt 0 and 100
 * @stop: Value passed by main()
 *
 * Return: TRUE or FALSE
 */
int verify(int stop)
{
	if (stop >= 0 && stop <= 100)
	{
		const int TRUE = 1;

		limit(stop);
		return (TRUE);
	}
	else
	{
		const int FALSE = 0;

		puts("Value does not fall on the required range.");
		return (FALSE);
	}
}

