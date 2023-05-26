#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int a, b, larger;

	printf("Enter value A: ");
	scanf("%d", &a);
	printf("Enter different value B: ");
	scanf("%d", &b);

	if (a > b)
	{
		larger = a;
	}
	else
	{
		larger = b;
	}
	printf("%d is larger\n", larger);
	return (0);
}

