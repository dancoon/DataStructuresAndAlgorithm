#include "main.h"

/**
 * main - entry point 
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {9, 7, 6, 5, 4, 3, 2, 1, 0};
	int n = sizeof(arr) / sizeof(arr[0]);

	heapsort(arr, n);
	printarray(arr, n);
}

