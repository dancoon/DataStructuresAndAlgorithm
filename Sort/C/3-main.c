#include <stdio.h>
#include "selectionsort.c"

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[] = {23, 13, 12, 8, 1};
	int n, i;

	n  = sizeof(arr)/sizeof(arr[0]);

	selectionsort(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d, ", arr[i]);
	}

	return (0);
}

