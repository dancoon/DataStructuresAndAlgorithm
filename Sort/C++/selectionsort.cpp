#include "main.h"

/**
 * smallest - finds the smallest element for a given index to the last
 *
 * @arr: array
 * @n: size of array
 * @i: third parameter
 *
 * Return: pos
 */
int smallest(int arr[], int n, int i)
{
	int pos, k;
	int small = arr[i];
	
	pos = i;
	for (k = i + 1; k <  n; k++)
	{
		if (arr[k] < small)
		{
			small = arr[k];
			pos = k;
		}
	}
	return (pos);
}

/**
 * selectionsort - sorting technique
 *
 * @arr: array
 * @n: size of array
 *
 * Return: void;
 */
void selectionsort(int arr[], int n)
{
	int i, temp, pos;

	for (i = 0; i < n; i++)
	{
		pos = smallest(arr, n, i);
		temp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = temp;
	}
}

