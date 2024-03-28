#include <stdio.h>

/**
 * main - declare an uninitialized array
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */
int main(void)
{
	char firstname[16];

	printf("What's your first name?\n");
	fgets(firstname, 16, stdin);
	printf("Hello %s\n", firstname);

	return (0);
}
