#include<stdio.h> 
int main(){

    int arr[50],n,i;
    int s; // size

    printf("size of array = ");
    scanf("%d",&s);

    printf("elements = ");
    for(i=0;i<s;i++){
    scanf("%d",&arr[i]);
    }

    printf("enter which position you want to delete = ");
    scanf("%d",&n);

    for(i=n-1;i<s-1;i++){
    }
s--;

printf("result = ");
for(i=0;i<s;i++){
    printf("%d ",arr[i]);
}
return 0;
}