#include <stdio.h>
/**
 * main - Entry point.
 * Description: The If Keyword
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int a, b;

	a = 6;
	b = a + 2;

	if (a > b)
	{
		printf("%d is greater than %d\n", a, b);
	}
	else
	{
		printf("%d is greater than %d\n", b, a);
	}
	return (0);
}

