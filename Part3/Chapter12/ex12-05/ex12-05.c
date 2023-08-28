#include <stdio.h>

/**
 * main - array practice
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */
int main(void)
{
	int idx;
	int highscore[10];

	for (idx = 0; idx < 10; idx++)
	{
		printf("Your #%d score: ", (idx + 1));
		scanf("%d", &highscore[idx]);
	}

	puts("Here are your highscores");
	for (idx = 0; idx < 10; idx++)
	{
		printf("#%d %d\n", (idx + 1), highscore[idx]);
	}

	return (0);
}

