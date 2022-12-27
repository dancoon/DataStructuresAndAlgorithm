#include "main.h"
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {9,8,7,6,5,4,4,3,2,10,8,6,5,3,21,6};
	int n = sizeof(arr) / sizeof(arr[0]);

	mergesort(arr, 0, n - 1);
	printarray(arr, n);
}

