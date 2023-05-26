#include <stdio.h>
/**
 * main - Entry point.
 * Description: Reading strings using the fgets() function
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char name[20];

	printf("Who are you?\n");
	fgets(name, 20, stdin);
	printf("Glad to meet you, %s\n", name);
	return (0);
}
