#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char response;

	printf("Do you feel happy about your life?\n");
	puts("Input Y/y for YES and N/n for NO");

	response = getchar();

	puts("Evaluating ...");

	if (response == 'y' || response == 'Y')
	{
		puts("The sky is just a barrier to entry, not the limit.");
	}
	else if (response == 'n' || response == 'N')
	{
		puts("Do something about it bruv.");
	}
	else
	{
		puts("The input is unrecognised.");
	}
	return (0);
}

