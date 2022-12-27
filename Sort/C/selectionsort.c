#include "main.h"
#include "smallest.c"

/**
 * selectionsort - sorting technique
 *
 * Return: void
 */
void selectionsort(int arr[], int n)
{
	int i, j, pos, temp;

	for (i = 0; i < n; i++)
	{
		pos = smallest(arr, n, i);
		temp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = temp;
	}
}

