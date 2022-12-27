#include "main.h"

/**
 * binarysearch - searching technique
 *
 * @arr: array
 * @beg: index
 * @end: index
 * @key: data to be searched
 *
 * Return: index if data is present else -1
 */
int binarysearch(int arr[], int beg, int end, int key)
{
        int mid;

        if (end >= beg)
        {
                mid = (beg + end) / 2;

                if (arr[mid] == key)
                {
                        return (mid);
                }
                else if (arr[mid] > key)
                {
                        end = mid - 1;
                        return binarysearch(arr, beg, end, key);
                }
                else
                {
                        beg = mid + 1;
                        return binarysearch(arr, beg, end, key);
                }
        }
        return (-1);
}

