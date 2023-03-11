#include "main.h"

/**
 * main - Prompts for Fahrenheit value and prints Celsius conversion
 *
 * Return: Always 0 (Success);
 */
int main(void)
{
	float temp_f;

	printf("Temperature in Fahrenheit: ");
	scanf("%f", &temp_f);

	printf("%.1fF is %.1fC\n", temp_f, convert(temp_f));

	return (0);
}

/**
 * convert - Converts Fahrenheit to Celsius
 * @f: Value in Fahrenheit
 *
 * Return: Conversion
 */
float convert(float f)
{
	return ((f - 32) / 1.8);
}

