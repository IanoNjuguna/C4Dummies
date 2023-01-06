#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		printf("%c\t", alphabet);
	}

	putchar('\n');
	return (0);
}

