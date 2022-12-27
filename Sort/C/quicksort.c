#include "main.h"

/**
 * swap - swaps two integers
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * partition - partitions an array
 *
 * @arr: array
 * @beg: index of first element
 * @end: index of last element
 *
 * Return: index of pivot
 */
int partition(int arr[], int beg, int end)
{
	int i, j;
	int pivot = arr[end];

	i = beg - 1;
	j = beg;
	for (; j <= end - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[j], &arr[i]);
		}
	}

	swap(&arr[i + 1], &arr[end]);
	
	return (i + 1);
}

/**
 * quicksort - sorting technique
 *
 * @arr: array to be sorted
 * @beg: index of first element
 * @end: index of last element
 *
 * Return: void
 */
void quicksort(int arr[], int beg, int end)
{
	if (beg < end)
	{
		int p;

		p = partition(arr, beg, end);

		quicksort(arr, beg, p - 1);
		quicksort(arr, p + 1, end);
	}
}

