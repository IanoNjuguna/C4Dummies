#include <stdio.h>
/**
 * main - Convert Radians to Degrees
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	float degrees, radians;

	printf("Enter angle in radians: ");
	scanf("%f", &radians);

	degrees = radians * 57.295775;

	printf("%.2f radians is %.2f degrees.\n", radians, degrees);
	return (0);
}
