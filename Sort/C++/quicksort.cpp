#include "main.h"

/**
 * partition - partition
 *
 * @arr: array
 * @beg: index
 * @end: index
 *
 * Return: pivot index
 */
int partition(int arr[], int beg, int end)
{
	int pivot = arr[end];
	int i, j;

	j = beg;
	i = j - 1;
	for (;j < end; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[end], &arr[i + 1]);

	return (i + 1);
}

/**
 * quicksort - sorting technique
 *
 * @arr: array
 * @beg: index
 * @end; index
 *
 * Return: void
 */
void quicksort(int arr[], int beg, int end)
{
	if (beg < end)
	{
		int p = partition(arr, beg, end);

		quicksort(arr, beg, p -1);
		quicksort(arr, p + 1, end);
	}
}

