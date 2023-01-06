#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 * Author: IanoNjuguna
 */

int main(void)
{
	int alpha, code;

	for (alpha = 'A'; alpha <= 'G'; alpha++)
	{
		for (code = 1; code <= 7; code++)
		{
			printf("%c%d\t", alpha, code);
		}
		putchar('\n');
	}
	return (0);
}

