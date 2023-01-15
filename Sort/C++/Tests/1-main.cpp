#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {7, 5, 7, 5, 43, 2, 21, 1, 9, 7, 45, 42, 0};
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionsort(arr, n);
	printarray(arr, n);
	 return (0);
}
	
