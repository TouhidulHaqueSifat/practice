#include<stdio.h>

void swap(int *x,int *y);
void bub(int*arr,int n );



int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    bub(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);


    return 0;
}
void bub(int*arr,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                swap(&arr[i],&arr[j]);
        }
    }
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

