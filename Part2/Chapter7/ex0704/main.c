#include <stdio.h>
/**
 * main - Entry point.
 * Description: Program that fetches characters using getchar()
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int a, b, c;

	printf("I am waiting for three characters: ");

	a = getchar();
	b = getchar();
	c = getchar();

	printf("The three characters are '%c', '%c', and '%c'\n", a, b, c);
	return (0);
}
