#include <stdio.h>
#include "main.h"

/**
 * prompt - prints to stdout
 */
void prompt(void)
{
	printf("C:\\DOS>");
}

/**
 * main - entry point for test
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	busy();
}

/**
 * busy - a while loop
 *
 * Return: Always 0 (Success)
 */
int busy(void)
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

