#include <stdio.h>
/**
 * main - Entry point.
 * Description: Reading strings using the fgets() function
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char first_name[30];
	char second_name[30];

	printf("Type your first name: \n");
	fgets(first_name, 30, stdin);
	printf("Type your second name: \n");
	fgets(second_name, 30, stdin);
	printf("Pleased to meet you, %s %s \n", first_name, second_name);
	return (0);
}
