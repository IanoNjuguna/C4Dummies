#include <stdio.h>
/**
 * main - Entry point.
 * Description: Program that fetches characters using getchar()
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int ch;

	printf("Press Enter Key: ");
	getchar();
	ch = 'H';
	putchar(ch);
	ch = 'i';
	putchar('!');
	putchar('\n');
	return (0);
}
