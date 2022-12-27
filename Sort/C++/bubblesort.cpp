#include "main.h"

/**
 * bubblesort - sorting technique
 *
 * @arr - array
 * @n - size of array
 *
 * Return: void
 */
void bubblesort(int arr[], int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
				swap(&arr[i], &arr[j]);
		}
	}
}

