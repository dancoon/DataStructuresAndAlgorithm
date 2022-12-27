#include "main.h"

/**
 * linearsearch - searching technique
 *
 * @arr: array
 * @n: size of array
 * @data: data
 *
 * Return: Index of data if present else -1
 */
int linearsearch(int arr[], int n, int key)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			return (i);
			break;
		}
	}
	return (-1);
}

