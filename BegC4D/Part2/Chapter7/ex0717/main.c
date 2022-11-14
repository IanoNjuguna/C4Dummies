#include <stdio.h>
/**
 * main - Entry point.
 * Description: Reading strings using the fgets() function
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

#define WORD name[4]

int main(void)
{
	printf("Who are you?\n");
	fgets(WORD, 4, stdin);
	printf("Glad to meet you, %s\n", WORD);
	return (0);
}
