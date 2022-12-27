#include "main.h"
#include <iostream>

using namespace std;

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
        (result == -1) ? cout << "Data not found\n" :cout << data << " is in index " << result << endl;

        return (0);
}

