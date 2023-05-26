#include "main.h"

/**
 * main - prompts for a value prints the conversion
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float temp_f, temp_c;

	printf("Temperature in Fahrenheit: ");
	scanf("%f", &temp_f);

	temp_c = convert(temp_f);

	printf("%.1fF is %.1fC\n", temp_f, temp_c);
	return (0);
}

/**
 * convert - Convert to Celsius from Fahrenheit
 * @f: Temperature in Fahrenheit
 *
 * Return: Conversion
 */
float convert(float f)
{
	float t;

	t = (f - 32) / 1.8;

	return (t);
}

