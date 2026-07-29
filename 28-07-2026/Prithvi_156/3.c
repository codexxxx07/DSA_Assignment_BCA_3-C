#include <stdio.h>

int main()
{
    int arr[50];
    int n, temp,i;

    printf("size = ");
    scanf("%d", &n);

    printf("elements = ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    printf("result = ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}