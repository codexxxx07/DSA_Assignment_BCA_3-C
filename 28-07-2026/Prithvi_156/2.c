#include<stdio.h>
int main(){
    int arr[50];
    int p,v,s; // position,value,size
    int i;

    printf("size = ");
    scanf("%d",&s);

    printf("elememts = ");
    for(i = 0;i<s;i++){
        scanf("%d",&arr[i]);
    }

    printf("position = ");
    scanf("%d",&p);
    printf("value = ");
    scanf("%d",&v);

    for(int i=s;i>=p;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[p-1]=v;
    s++;

    printf("Array = ");
    for(int i = 0; i<s; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}