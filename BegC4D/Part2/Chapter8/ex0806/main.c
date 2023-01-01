#include <stdio.h>
#define SECRET 17

/**
 * main - Entry point
 * Description: Checks whether two values are equal to each other
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int guess;

	printf("Can you guess the secret number: \n");
	scanf("%d", &guess);

	if (guess == SECRET)
	{
		puts("You guessed it!");
		return (0);
	}
	if (guess != SECRET)
	{
		puts("Wrong!");
		return (1);
	}
	return (0);
}

