#include <stdio.h>

int main()
{
    int arr[50];
    int n,search;
    int flag=0;

    printf("elements = ");
    scanf("%d",&n);
    printf("array elements = ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("put element to search = ");
    scanf("%d", &search);

    for(int i=0; i<n; i++)
    {
        if(arr[i]==search)
        {
            printf("Element found at position %d", i+1);
            flag=1;
            break;
        }
    }
    
    if(flag==0)
    {
        printf("Element not found");
    }
    return 0;
}