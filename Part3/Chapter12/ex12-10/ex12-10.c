#include <stdio.h>

/**
 * main - declare two uninitialized arrays
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */
int main(void)
{
	char firstname[16];
	char secondname[16];

	printf("What is your first name?\n");
	fgets(firstname, 16, stdin);
	printf("What is your second name?\n");
	fgets(secondname, 16, stdin);

	printf("Hello %s %s\n", firstname, secondname);
	return (0);
}
