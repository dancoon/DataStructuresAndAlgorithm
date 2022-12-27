#include <stdio.h>
#include "mergesort.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[] = {8, 6, 4, 3, 1};
	int i, n;
	
	n = sizeof(arr) / sizeof(arr[0]);

	mergesort(arr, 0, n - 1);
	for (i = 0; i < n; i++)
	{
		printf("%d, ", arr[i]);
	}

	return (0);
}

