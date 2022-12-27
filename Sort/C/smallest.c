#include "main.h"

/**
 * smallest - findest the position of the smallest element in an array
 * 
 * @arr[] - array
 * @n - size of array
 * @i - from a point in an array
 *
 * Return: position of the smallest element
 */
int smallest(int arr[], int n, int i)
{
	int small, pos, j;

	small = arr[i];
	pos = i;
	for (j = i + 1; j < n; j++)
	{
		if (arr[j] < small)
		{
			small = arr[j];
			pos = j;
		}
	}
	return (pos);
}

