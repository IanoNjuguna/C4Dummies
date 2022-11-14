#include <stdio.h>
/**
 * main - Entry point.
 * Description: Reading strings using the fgets() function
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	#define NAME char[4]

	printf("Who are you?\n");
	fgets(NAME, 4, stdin);
	printf("Glad to meet you, %s\n", NAME);
	return (0);
}
