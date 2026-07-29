#include <stdio.h>

int main()
{
    int a[50];
    int n,search;
    int low,high,mid;
    int flag=0;

    printf("elements = ");
    scanf("%d",&n);

    printf("sorted elements = ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter elements to search == ");
    scanf("%d", &search);
    low=0;
    high=n-1;
    int i=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==search)
        {
            printf("Element found at position %d", mid+1);
            flag=1;
            break;
        }
        else if(a[mid]<search)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==0)
    {
        printf("Element not found !!!");
    }
    return 0;
}