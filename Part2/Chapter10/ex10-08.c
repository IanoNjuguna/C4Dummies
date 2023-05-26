#include "main.h"

/**
 * main - Give arguments to be passed to graph()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int value = 2;
	char ast = '*';

	while (value <= 64)
	{
		graph2(value, ast);
		printf("Value is %d\n", value);
		value *= 2;
	}
	return (0);
}

/**
 * graph2 - Displays a row of characters
 * @count: Determines the number of characters
 * @ast: The character to be displayed
 *
 * Return: nothing
 */
void graph2(int count, char ast)
{
	int x;

	for (x = 0; x < count; x++)
	{
		putchar(ast);
	}
	putchar('\n');
}

