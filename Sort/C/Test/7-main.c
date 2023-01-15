#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: void
 */
int main(void)
{
	int arr[] = {123, 20, 340, 432, 700, 342, 756, 605};
	int n, i;

	n = sizeof(arr) / sizeof(arr[0]);
	
	radixsort(arr, n);
	
	for (i = 0; i < n; i++)
		printf("%d, ", arr[i]);

	return (0);
}

