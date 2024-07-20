#include "main.h"
#include <stdio.h>

/**
 * main - Calls the Bubble Sort Function
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */
int main(void)
{
	int bubble[] = {95, 60, 6, 87, 50, 24};
  int len = sizeof(bubble) / sizeof(bubble[0]);
	int x;

	/* Display Original Array */
	puts("Original Array: ");

	for (x = 0; x < len; x++)
	{
		printf("%d\t", bubble[x]);
	}
	putchar('\n');

	/* Bubble Sort */
	int *sortedArray = bubble_sort(bubble, len);

	/* Display Sorted Array */
	puts("Sorted Array");

	for (x = 0; x < len; x++)
	{
		printf("%d\t", sortedArray[x]);
	}
	putchar('\n');

	return (0);
}
