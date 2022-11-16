# include <stdio.h>
/**
 * main - Entry point.
 * Description: Using comparison Operators
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

#define SECRET 17

int main(void)
{
	int guess;

	puts("Guess the secret number: ");
	scanf(" %d ", &guess);

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
