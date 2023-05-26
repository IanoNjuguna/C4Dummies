#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point.
 * Description: defining a constant
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

#define VALUE 3

int main(void)
{
	printf("The value is %d\n", VALUE);
	printf("And %d is the value\n", VALUE);
	printf("It's not %d\n", VALUE + 1);
	printf("And its not %d\n", VALUE - 1);
	printf("No, the value is %d\n", VALUE);
	return (0);
}
