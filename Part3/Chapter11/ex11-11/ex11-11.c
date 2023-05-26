#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - Experiment with math functions
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	float value, result;

	printf("Input a float value: ");
	scanf("%f", &value);

	result = sqrt(value);
	printf("The square root of %.2f is %.2f\n", value, result);
	result = pow(value, 3);
	printf("%.2f to the third power is %.2f\n", value, result);
	result = floor(value);
	printf("The floor of %.2f is %.2f\n", value, result);
	result = ceil(value);
	printf("The ceiling of %.2f is %.2f\n", value, result);

	return (0);
}
