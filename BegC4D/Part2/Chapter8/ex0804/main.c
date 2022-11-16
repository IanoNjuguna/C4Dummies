#include <stdio.h>
/**
 * main - Entry point.
 * Description: Comparison Operators
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int first;
	int second;

	printf("Input the first value : \n");
	scanf(" %d ", &first);

	printf("Input the second value : \n");
	scanf(" %d ", &second);

	puts("Evaluating . . .\n");

	if (first < second)
	{
		printf(" %d is less than % d \n", first, second);
	}
	if (first > second)
	{
		printf(" %d is greater than % d \n", first, second);
	}
	return (0);
}
