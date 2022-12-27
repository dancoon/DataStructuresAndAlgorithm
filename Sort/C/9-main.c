#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {12, 34 ,2 ,45,67,32 ,21 , 3, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;

	shellsort(arr, n);

	for (i = 0; i < n; i++)
		printf("%d, ", arr[i]);

	return (0);
}

