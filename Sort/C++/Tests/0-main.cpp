#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int arr[] = {6,4,2,1,4,3,2};
	int n = sizeof(arr) / sizeof(arr[0]);

	bubblesort(arr, n);
	printarray(arr, n);
	
	return (0);
}

