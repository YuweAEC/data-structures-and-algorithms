#include <stdio.h>
#include <conio.h>

void insertion_sort(int *a, int N)  // N is the size of the array
{
    int i = 1, j = 0, temp = 0; // i is the index of the element to be inserted, j is the index of the element to be compared with temp, temp is the element to be inserted
    for (i = 1; i < N; i++)     // i is the index of the element to be inserted
    {           
        temp = a[i];  // temp is the element to be inserted
        for (j = i - 1; j >= 0; j--)   // j is the index of the element to be compared with temp
        {
            if (a[j] > temp) // if the element to be compared is greater than the element to be inserted
            {
                a[j + 1] = a[j]; // shift the element to the right
            }
            else
            {
                break; // if the element to be compared is smaller than the element to be inserted, break the loop
            }
        }
        a[j + 1] = temp; // insert the element
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n); // take user input for the number of elements

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // take user input for the elements
    }

    insertion_sort(arr, n); // call the function insertion_sort

    printf("Sorted array: \n"); // print the sorted array
    for (int i = 0; i < n; i++) // i is the index of the array
    {
        printf("%d ", arr[i]); // print the element at index i
    }

    return 0;
}

