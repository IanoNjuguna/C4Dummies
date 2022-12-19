#include <stdio.h>
/**
 * main - Entry point.
 * Description: Comparison Operators
 *
 * @first: Contains value to be checked
 * @second: Contains value to be checked
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int first = 7;
	int second = 7;

	if (first < second)
	{
		printf(" %d is less than %d \n", first, second);
	}
	if (first > second)
	{
		printf(" %d is greater than %d\n", first, second);
	}
	if (first == second)
	{
		printf(" %d is equal to %d\n", first, second);
	}
	return (0);
}
