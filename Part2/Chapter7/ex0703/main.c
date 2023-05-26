#include <stdio.h>
/**
 * main - Entry point.
 * Description: Program that fetches characters using getc(stdin);
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int c;

	printf("I'm waiting for a character: ");
	c = getc(stdin);
	printf("I waited for the '%c' character.\n", c);
	return (0);
}
