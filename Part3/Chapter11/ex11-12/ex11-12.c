#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Holy Numbers of Computing
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int power;
	const int i = 2;

	printf("THE HOLY NUMBERS OF COMPUTING\n");

	for (power = 0; power < 11; power++)
	{
		printf("%.2f\n", pow(i, power));
	}
	return (0);
}

