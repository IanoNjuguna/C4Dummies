#include <stdio.h>
/**
 * main - Collecting and printing scores using an array
 *
 * Return: Always 0
 */
int main(void)
{
	int highscore[4];
	int indx;

	for (indx = 0; indx < 4; indx++)
	{
		printf("Your #%d score: ", indx + 1);
		scanf("%d", &highscore[indx]);
	}

	printf("\n");

	puts("Here are your highscores ");
	for (indx = 0; indx < 4; indx++)
	{
		printf("#%d %d\n", indx + 1, highscore[indx]);
	}

	return (0);
}

