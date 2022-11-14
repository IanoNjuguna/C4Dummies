#include <stdio.h>
/**
 * main - Entry point.
 * Description: Reading integers using the scanf() function
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int fav;

	printf("What is your favourite number: ");
	scanf("%d", &fav);
	printf("%d is my favourite number, too!\n", fav);
	return (0);
}
