#include <stdio.h>
/**
 * main - Entry point.
 * Description: Program that displays a
 *		character’s ASCII code value.
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */


int main(void)
{
	int c;

	printf("I'm waiting for a character: ");
	c = getchar();
	printf("I waited for the '%d' character.\n", c);
	return (0);
}
