#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char one, two, three;

	for (one = 'A'; one <= 'Z'; one++)
	{
		for (two = 'A'; two <= 'Z'; two++)
		{
			for (three = 'A'; three <= 'Z'; three++)
			{
				printf("%c%c%c\n", one, two, three);
			}
			putchar('\n');
		}
	}
	return (0);
}

