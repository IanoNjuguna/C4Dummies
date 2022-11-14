#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point.
 * Description: defining various data types
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	char c;
	int i;
	float f;
	double d;

	c = 'a';
	i = 1;
	f = 19.8;
	d = 20000.009;

	printf("%c\n%d\n%f\n%f\n", c, i, f, d);
	return (0);
}
