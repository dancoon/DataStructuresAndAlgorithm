#include "main.h"

/**
 * getmax - gets max in an array
 *
 * @arr: array
 * @n: size of array
 *
 * Return: max
 */
int getmax(int arr[], int n)
{
	int max = arr[0];
	int i;

	for (i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return (max);
}

/**
 * countingsort - sorting technique
 * @arr: array
 * @n: size of array
 * @pos: place value
 *
 * Return: void
 */
void countingsort(int arr[], int n, int pos)
{
	int i;
	int count[10], output[n];

	for (i = 0; i < 10; i++)
		count[i] = 0;

	for (i = 0; i < n; i++)
		++count[(arr[i] / pos) % 10];

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = 0; i < n; i++)
		output[--count[(arr[i] / pos) % 10]] = arr[i];

	for ( i = 0; i < n; i++)
		arr[i] = output[i];
}

/**
 * radixsort - sorting technique
 *
 * @arr: array
 * @n: size of array
 *
 * Return: void
 */
void radixsort(int arr[], int n)
{
	int max = getmax(arr, n);
	int pos;

	for(pos = 1; max / pos > 0; pos *= 10)
		countingsort(arr, n , pos);
}

