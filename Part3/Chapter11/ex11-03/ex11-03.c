#include <stdio.h>

/**
 * main - Uses a for loop for iteration
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */
int main(void)
{
	int count;

	for (count = -5; count < 6; count++)
	{
		printf("%d\t", count);
	}

	for (count = 5; count > -6; count--)
	{
		printf("%d\t", count);
	}
	printf("\n");

	return (0);
}

