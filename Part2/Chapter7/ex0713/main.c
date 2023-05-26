#include <stdio.h>
/**
 * main - Entry point.
 * Description: Reading strings using the scanf() function
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char first_name[30];
	char second_name[30];

	printf("Type your first name: \n");
	scanf("%s", first_name);
	printf("Type your second name: \n");
	scanf("%s", second_name);
	printf("Pleased to meet you, %s %s.\n", first_name, second_name);
	return (0);
}
