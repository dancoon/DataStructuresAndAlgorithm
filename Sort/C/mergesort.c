#include "main.h"
/**
 * merge - merges subarrays 
 *
 * Return: void
 */
void merge(int arr[], int b, int m, int e)
{
	int i, j, k;
	
	int n1 = m - b + 1;
	int n2 = e - m;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
	{
		L[i] = arr[b + i];
	}
	
	for ( j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}
	
	k = b;
	i = 0;
	j = 0;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
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
	
	while (j <n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
	
}
/**
 * mergesort - sortingtechnique
 *
 * Return: void
 */
void mergesort(int arr[], int beg, int end)
{
	int mid;

	if (beg < end)
	{
		mid = beg + (end - beg) / 2;
		mergesort(arr, beg, mid);
		mergesort(arr, mid + 1, end);
		merge(arr, beg, mid, end);
	}
}
