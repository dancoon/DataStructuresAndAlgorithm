#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {423, 234, 546, 643, 321, 765, 822, 911, 101};
	int n = sizeof(arr) / sizeof(arr[0]);

	radixsort(arr, n);
	printarray(arr, n);

	return (0);
}

