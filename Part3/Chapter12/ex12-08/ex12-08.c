#include <stdio.h>

/**
 * main - print a string in C
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char *sentence = "Random text";

	int index = 0;

	while (sentence[index] != '\0')
	{
		printf("%c", sentence[index]);
		index++;
	}
	printf("\n");
	return (0);
}
