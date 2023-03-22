#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Check whether two values are equal to each other(Guessing Game)
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int SECRET;
	int guess;

	srand((unsigned int) time(NULL));

	SECRET = (rand() % 20);

	printf("Can you guess a secret number between 0 and 20: \n");
	scanf("%d", &guess);

	if (guess == SECRET)
	{
		puts("You guessed it!");
		printf("The secret number is: %d\n", SECRET);
		return (0);
	}
	else
	{
		puts("Wrong!");
		printf("The secret number is: %d\n", SECRET);
		return (1);
	}
	return (0);
}

