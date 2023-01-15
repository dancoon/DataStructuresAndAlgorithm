#include "main.h"
#include "quicksort.c"
#include <stdio.h>

/**
 * main - enrty point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int arr[] = {3, -2, -1, 0, 2, 4, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	quicksort(arr, 0, n - 1);
	for (i = 0; i < n; i++)
	{
		printf("%d, ", arr[i]);
	}

	return (0);
}

