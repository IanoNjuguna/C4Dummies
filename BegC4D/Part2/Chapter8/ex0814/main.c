#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int coordinate;

	printf("Input target coordinate: ");
	scanf("%d", &coordinate);

	if (coordinate >= -5 && coordinate <= 5)
	{
		puts("Close enough!");
	}
	else
	{
		puts("Target is out of range!");
	}
	return (0);
}

