#include <stdio.h>

/**
 * main - Uses a for loop for iteration
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */
int main(void)
{
	int count = -10;
	int count2 = 10;

	while (count < 11)
	{
		printf("%d\t", count);
		count++;
	}

	while (count2 > -11)
	{
		printf("%d\t", count2);
		count2--;
	}
	printf("\n");

	return (0);
}

