#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {4, 5, 6, 1, 2, 4, 3, 4, 6, 7, 8, 9, 4, 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	countingsort(arr, n);
	printarray(arr, n);

	return (0);
}

