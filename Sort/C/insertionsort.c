#include "main.h"

/**
 * insertionsort - sorting technique
 * 
 * @arr[] - array
 * @n - size of array
 *
 * Return: void
 */
void insertionsort(int arr[], int n)
{
	int j, k, temp;

	for (k = 1; k < n; k++)
	{
		temp = arr[k];
		j = k - 1;

		while (j >=0 && temp <= arr[j])
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}

