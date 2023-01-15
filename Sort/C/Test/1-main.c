#include <stdio.h>
#include "bubblesort.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[5] = {3, 2, 6, 5, 1};
	int n, i;
	
	n = 5;
	bubblesort(arr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d, ", arr[i]);
	}

	return (0);
}

