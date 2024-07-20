#include "main.h"
/*
 * bubble_sort - Bubble Sort Algorithm
 *
 * @array: array to be sorted
 * @length: length of the array
 *
 * return: sorted array
 */

int* bubble_sort(int array[], int length)
{
  int inner, outer, temp;

  for (outer = 0; outer < length; outer++)
  {
    for (inner = 0; inner < (length - 1); inner++)
    {
      if (array[outer] > array[inner])
      {
        array[temp] = array[outer];
        array[outer] = array[inner];
        array[inner] = array[temp];
      }
    } 
  }

  return array;
}


