#include "sort.h"
#include <stdio.h>
/**
  * selection_sort - selection sort algorithm
  * @array: array to sort
  * @size: size of array
  */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int value;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			value = array[i];
			array[i] = array[min_index];
			array[min_index] = value;
			print_array(array, size);
		}
	}
}
