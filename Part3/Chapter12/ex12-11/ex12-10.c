#include <stdio.h>

/**
 * main - declare two uninitialized arrays and use scanf to read from stdin
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */
int main(void)
{
	char firstname[16];
	char secondname[16];

	printf("What is your first name?\n");
	scanf("%s", firstname);
	printf("What is your second name?\n");
	scanf("%s", secondname);

	printf("Hello %s %s\n", firstname, secondname);
	return (0);
}
