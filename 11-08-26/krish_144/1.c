// Selection Sort

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
    for (int i=0; i<size-1; i++)
    {
        int min=i;
        for (int j=i+1; j<size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("Sorted array: ");
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}