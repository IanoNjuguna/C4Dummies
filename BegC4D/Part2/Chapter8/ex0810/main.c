#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjugua
 */

int main(void)
{
	int a, b;

	a = 6;
	b = a - 2;

	if (a > b)
	{
		printf("%d is greater than %d\n", a, b);
	}
	else
	{
		printf("%d is not greater than %d\n", a, b);
	}
	return (0);
}

