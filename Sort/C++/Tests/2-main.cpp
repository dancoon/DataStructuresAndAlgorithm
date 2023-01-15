#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 6, 4, 3, 1, 0};
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionsort(arr, n);
	printarray(arr, n);

	return (0);
}

