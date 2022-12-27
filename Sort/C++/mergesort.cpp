#include "main.h"
/**
 * merge - merges two subarrays
 *
 * @arr: array
 * @beg: second parameter
 * @mid: third parameter
 * @end: fourth parameter
 *
 * Return: void
 */
void merge(int arr[], int beg, int mid, int end)
{
	int i, j, k;

	int n1 = mid - beg + 1;
	int n2 = end - mid;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[beg + i];

	for (j = 0; j < n2; j++)
		R[j] = arr[mid + 1 + j];

	i = 0;
	j = 0;
	k = beg;
	while (i < n1 && j < n2)
	{
		if (L[i] < R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

/**
 * mergesort - sorting technique
 *
 * @arr: array
 * @beg: index
 * @end: index
 *
 * Return: void
 */
void mergesort(int arr[], int beg, int end)
{
	if (beg < end)
	{
		int mid = beg + (end - beg) / 2;

		mergesort(arr, beg, mid);
		mergesort(arr, mid + 1, end);

		merge(arr, beg, mid, end);
	}
}

