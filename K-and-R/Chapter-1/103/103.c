#include <stdio.h>
/**
 * main - Print Celsius - Fahrenheit Table
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	printf("Celsius to Fahrenheit Conversion table.\n");

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0fF\t%6.1fC\n", fahr, celsius);
		fahr = fahr + step;
	}
	return (0);
}
