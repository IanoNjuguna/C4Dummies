#include <stdio.h>
/**
 * main - Collects and outputs scores
 *
 * Return: Always 0
 */
int main(void)
{
	int highscore1, highscore2, highscore3, highscore4;

	printf("Your highest score: ");
	scanf("%d", &highscore1);
	printf("Your second highest score: ");
	scanf("%d", &highscore2);
	printf("Your third highest score: ");
	scanf("%d", &highscore3);
	printf("Your fourth highest score: ");
	scanf("%d", &highscore4);

	puts("Here are your high scores");
	printf(" #1 %d\n #2 %d\n #3 %d\n #4 %d\n", highscore1,
			highscore2, highscore3, highscore4);

	return (0);
}

