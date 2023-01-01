#include <stdio.h>
#define SECRET 17

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int guess;

	printf("Can you guess the secret number:\n");

	scanf("%d", &guess);

	if (guess == SECRET)
	{
		puts("You guessed it!");
		return (0);
	}
	else
	{
		puts("Wrong!");
		return (1);
	}
	return (0);
}

