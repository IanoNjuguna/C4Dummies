#include <stdio.h>
/**
 * main - Entry point.
 * Description: Program that fetches characters using getchar()
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int c;

	printf("I'm waiting for a character: ");
	c = getchar();
	printf("I waited for the '%c' character.\n", c);
	return (0);
}
