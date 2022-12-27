#include "main.h"

/**
 * swap - swaps two numbers
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * heapify - creates a heap
 *
 * @arr: array
 * @n: size of array
 * @i: index of a node
 *
 * Return: void
 */
void heapify(int arr[], int n, int i)
{
	int largest, l, r;

	largest = i;
	l = (2 * i) + 1;
	r = (2 * i) + 2;

	if (l < n && arr[l] > arr[largest])
		largest = l;
	
	if (r < n && arr[r] > arr[largest])
		largest =  r;

	if (largest != i)
	{
		swap(&arr[largest], &arr[i]);
		heapify(arr, n, largest);
	}
}

/**
 * heapsort - sorting technique
 *
 * @arr: array
 * @n: size of array
 *
 * Return: void
 */
void heapsort(int arr[], int n)
{
	int i;

	for (i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);
	
	for (i = n - 1; i > 0; i--)
	{
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}

