#include <stdio.h>
#include <conio.h>

void insertion_sort(int *a, int N)
{
    int i = 1, j = 0, temp = 0;
    for (i = 1; i < N; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > temp)
            {
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j + 1] = temp;
    }
}
