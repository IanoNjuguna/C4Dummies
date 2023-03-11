#include "main.h"

/**
 * graph - Display a row of asterisks
 *
 * @count: Determine how many rows will be displayed
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

/**
 * main - Gives us the argument to be passed to graph()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int value;

	value = 2;

	while (value <= 64)
	{
		graph(value);
		printf("Value is %d\n", value);
		value *= 2;
	}
	return (0);
}
