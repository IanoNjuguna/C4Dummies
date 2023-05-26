#include <stdio.h>
/**
 * main - Entry point.
 * Description: Reading floats using the scanf() function
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	float fav;

	printf("What is your favourite floating-point value: ");
	scanf("%f", &fav);
	printf("%f is my favourite floating-point value, too!\n", &fav);
	return (0);
}
