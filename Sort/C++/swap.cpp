#include "main.h"

/**
 * swap - swap two integers
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

