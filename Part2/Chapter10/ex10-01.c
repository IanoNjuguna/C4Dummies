#include "main.h"

/**
 * prompt - display prompt
 */
void prompt(void)
{
	printf("C:\\DOS>");
}

/**
 * main - Accesses the function and requests for input
 *
 * Return: Always 0
 * Author: IanoNjuguna
 */
int main(void)
{
	int loop = 0;
	char input[32];

	while (loop < 5)
	{
		prompt();
		fgets(input, 31, stdin);
		loop++;
	}
	return (0);
}

