#include "sort.h"
/**
 * quick_sort_lomuto - sorts an array of integers in ascending order using
 * the Selection sort algorithm using recursion
 * @array: pointer to array
 * @size: size of the array
 * @arr: initial pointer to array
 * @_size: initial size of the array
 **/
void quick_sort_lomuto(int *arr, size_t _size, int *array, size_t size)
{
	size_t j, pos;
	int aux2;
	int i = -1; /* Index of smaller element*/
	int temp, pivot = array[size - 1];

	if (array && size > 1)
	{
		for (j = 0; j < size - 1; j++)
		{
			/*If current element is smaller than the pivot*/
			if (array[j] < pivot)
			{
				i++; /*increment index of smaller element*/
				pos = i;
				if (pos != j && array[j] != array[pos])
				{
					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					print_array(arr, _size);
				}
			}


		}
		aux2 = size;
		if (aux2 - 1 != i + 1 && array[aux2 - 1] != array[i + 1])
		{
			array[size - 1] = array[i + 1];
			array[i + 1] = pivot;
			print_array(arr, _size);
		}
		if (i > 0)
		{
			quick_sort_lomuto(arr, _size, array, i + 1);
		}
		quick_sort_lomuto(arr, _size, array + i + 2,  size - (i + 2));
	}
}
/**
 * quick_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: pointer to array
 * @size: size of the array
**/
void quick_sort(int *array, size_t size)
{
	int *_array;
	size_t _size;

	if (array)
	{
		_array = array;
		_size = size;
		quick_sort_lomuto(_array, _size, array, size);
	}
}
