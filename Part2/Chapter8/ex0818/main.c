#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char input;

	puts("Enter a character: (A, B, or C)");
	scanf("%c", &input);

	switch (input)
	{
		case 'A':
			puts("A for Apple");
			break;
		case 'B':
			puts("B for Boy");
			break;
		case 'C':
			puts("C for Cat");
			break;
		default:
			puts("Not A, B, or C.");
	}
	return (0);
}

