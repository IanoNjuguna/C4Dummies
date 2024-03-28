#include <stdio.h>

/**
 * main - fill the array2 with the square root of values in the array1
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	int array1[] = {10, 12, 14, 15, 16, 18, 20};
	int array2[sizeof(array1)];
	int idx;

	for (idx = 0; idx < 7; idx++)
	{
		array2[idx] = array1[idx] * array1[idx];
		printf("Square Root of %d is: %d\n", array1[idx], array2[idx]);
	}
}
