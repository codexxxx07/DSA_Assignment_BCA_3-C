// Insertion sort

#include <stdio.h>
int main()
{
    int arr[100], size, temp;
    printf("Enter the size of the array...");
    scanf("%d", &size);
    printf("Enter elements...");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=1; i<size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("Sorted array...");
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}