#include <stdio.h>
#include "main.h"

/**
 * bubblesort - sorting technique
 * 
 * @arr[] - array
 * @n - size of array
 *
 * Return: Sorted array
 */
void bubblesort(int arr[], int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

