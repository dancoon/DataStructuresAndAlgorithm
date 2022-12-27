#include "main.h"
#include <iostream>

using namespace std;

/**
 * printarray - prints an array
 *
 * @arr: array
 * @n: size of array
 *
 * Return: void
 */
void printarray(int arr[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		cout << arr[i];
		if (i != n - 1)
			cout << ", ";
	}

}
		
