#include "main.h"

/**
 * main - Gives the argument to be passed to graph()
 *
 * Return: Always 0  (Success)
 */
int main(void)
{
	const int value = 64;

	while (value <= 64)
	{
		graph(value);

		printf("Value is %d\n", value);
	}
	return (0);
}

/**
 * graph - Displays a row of asterisks
 * @count: Determines the number of asterisks in row
 *
 * Return: nothing
 */
void graph(int count)
{
	int x;

	for (x = 0; x < count; x++)
	{
		putchar('*');
	}
	putchar('\n');
}

