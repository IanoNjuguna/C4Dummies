#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	float i;

	i = -5;

	while (i <= 5)
	{
		printf("%.2f\t", i);
		i = i + 0.5;
	}
	printf("\n");
	return (0);
}

