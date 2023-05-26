#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Endless loop that breaks at 50
 * Author: IanoNjuguna
 */

int main(void)
{
	int count;

	count = 0;
	for (;;)
	{
		printf("%d\n", count);
		count++;

		if (count > 50)
			break;
	}
	putchar('\n');
	return (0);
}

