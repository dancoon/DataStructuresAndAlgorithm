#include "main.h"

/**
 * max - gets max in an array
 *
 * @arr: array
 * @n: size of array
 *
 * Return: max
 */
int max(int arr[], int n)
{
	int max, i;

	max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return (max);
}

/**
 * countingsort - sorting technique
 *
 * @arr: array
 * @n: size of array
 *
 * Return: void
 */
void countingsort(int arr[], int n)
{
	int k = max(arr, n);
	int count[k + 1], output[n];
	int i;

	for (i = 0; i < k + 1; i++)
		count[i] = 0;

	for (i = 0; i < n; i++)
		++count[arr[i]];

	for (i = 1; i < k + 1; i++)
		count[i] = count[i] + count[i - 1];

	for (i = 0; i < n; i++)
		output[--count[arr[i]]] = arr[i];

	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

