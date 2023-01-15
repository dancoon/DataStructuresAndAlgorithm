#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int arr[] = {6, 4, 7, 3, 8, 3, 6, 1, 9};
	int n = 9;

	countingsort(arr, n);

	for (i = 0; i < n; i++)
		printf("%d, ", arr[i]);
	
	return (0);
}

