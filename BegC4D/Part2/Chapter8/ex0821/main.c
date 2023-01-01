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

	printf("Enter integer value A: ");
	scanf("%d", &a);
	printf("Enter integer value B: ");
	scanf("%d", &b);

	larger = (a > b) ? a : b;
	printf("Value %d is larger. \n", larger);
	return (0);
}

