#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int arr[] = {9, 7, 5, 4, 3, 2, 1, 9, 7, 6, 5, 4, 3, 2, 1, 0};
	int n = sizeof(arr) / sizeof(arr[0]);

	quicksort(arr, 0, n- 1);
	printarray(arr, n);
	 return (0);
}

