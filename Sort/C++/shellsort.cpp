#include "main.h"

/**
 * shellsort - sorting technique
 *
 * @arr: array
 * @n: size of array
 *
 * Return: void
 */
void shellsort(int arr[], int n)
{
	int gap, j, i;

	for (gap = n / 2; gap > 0; gap /= 2)
	{
		for (j = gap; j < n; j++)
		{
			for (i = j - gap; i >= 0; i -= gap)
			{
				if (arr[gap + i] > arr[i])
					break;
				else
					swap(&arr[gap + i], &arr[i]);
			}
		}
	}
}
