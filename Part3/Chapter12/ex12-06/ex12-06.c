#include <stdio.h>

/**
 * main - display the stock market closing numbers
 *		  for the past 5 days
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int idx = 0;
	float marketclose[] = {14450.06, 14458.62, 14539.14, 14514.11, 14452.06};
	int index = 0;

	for (; idx <= 4; idx++)
	{
		printf("#%d: %.2f\n", idx + 1, marketclose[index]);

	}

	return (0);
}
