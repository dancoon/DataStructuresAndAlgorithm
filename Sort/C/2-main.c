#include <stdio.h>
#include "insertionsort.c"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[] = {3, 5, 4, 2, 1};
	int i, n;

	n= 5;
	insertionsort(arr, n);

	for (i = 0; i < n; i++)
		printf("%d, ", arr[i]);

	return (0);
}

