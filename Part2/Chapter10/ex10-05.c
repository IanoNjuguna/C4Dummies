#include "main.h"

/**
 * vegas - Define variable a
 *
 * Return: nothing
 */
void vegas(void)
{
	int a = -10;

	printf("In the vegas function, a = %d\n", a);
}

/**
 * main - Variables decalared and used within a function are local
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 365;

	printf("In the main function, a = %d\n", a);
	vegas();
	printf("In the main function, a = %d\n", a);

	return (0);
}

