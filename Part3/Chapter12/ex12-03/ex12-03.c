#include <stdio.h>

/**
 * main - prints 4 high scores
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */
int main(void)
{
	int highscore[4];
	int idx;

	for(idx = 0; idx < 4; idx++)
	{
		printf("Your #%d score: ", (idx + 1));
		scanf("%d", &highscore[idx]);
	}

	puts("Here are your highscores");
	for (idx = 0; idx < 4; idx++)
	{
		printf("#%d %d\n", (idx + 1), highscore[idx]);
	}

	return (0);
}

