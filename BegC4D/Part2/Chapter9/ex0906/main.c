#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int trio;

	for (trio = 3; trio <= 100; trio = trio + 3)
	{
		printf("%d\t", trio);
	}

	putchar('\n');
	return (0);
}

