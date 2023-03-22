#include <stdio.h>
/**
 * main - Convert Degrees to Radians
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	float degrees, radians;

	printf("Enter angle in degrees: ");
	scanf("%f", &degrees);
	radians = 0.0174532925 * degrees;
	printf("%.2f degrees is %.2f radians.\n", degrees, radians);
	return (0);
}
