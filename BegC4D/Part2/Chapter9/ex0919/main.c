#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int count;

	count = 0;
	while (1)
	{
		printf("%d\n", count);
		count++;

		if (count > 50)
			break;
	}
	putchar('\n');
	return (0);
}

