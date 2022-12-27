#include "main.h"

/**
 * swap - swaps two integers
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
				if (arr[i + gap] > arr[i])
					break;
				else
					swap(&arr[i +  gap], &arr[i]);
			}
		}
	}
}

