#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {23, 45, 1, 2 ,7, 34, 0, 12};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;

	heapsort(arr, n);

	for (i = 0; i < n; i++)
		printf("%d, ", arr[i]);

	return (0);
}
