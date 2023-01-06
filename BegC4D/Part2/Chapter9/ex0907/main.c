#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int integer;

	for (integer = 25; integer >= 0; integer--)
	{
		printf("%d\t", integer);
	}

	putchar('\n');
	return (0);
}

