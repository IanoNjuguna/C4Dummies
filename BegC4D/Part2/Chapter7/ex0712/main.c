#include <stdio.h>
/**
 * main - Entry point.
 * Description: Reading strings using the scanf() function
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char first_name[15];

	printf("Type your first name: ");
	scanf("%s", first_name);
	printf("Pleased to meet you, %s.\n", first_name);
	return (0);
}
