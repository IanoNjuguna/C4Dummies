#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point.
 * Description: defining a constant
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

#define A 8
#define B 2

int main(void)
{
	puts("The values are 8 and 2:");
	printf("Addition is %d\n", A + B);
	printf("Subtraction is %d\n", A - B);
	printf("Multiplication is %d\n", A * B);
	printf("Division is %d\n", A / B);
	return (0);
}
