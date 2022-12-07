#include<stdio.h>

void pointers(int* arr,int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    pointers(arr,n);
    return 0;
}
