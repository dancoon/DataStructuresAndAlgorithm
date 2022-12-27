#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int arr[] = {1, 3, 4, 5, 6, 7, 8, 9, 34};
	int n = sizeof(arr) / sizeof(arr[0]);
	int result, data;

	data = 6;
	result = linearsearch(arr, n, data);
	(result == -1) ? printf("Data not found\n") : printf("%d is in index %d\n", data, result);

	return (0);
}
	
