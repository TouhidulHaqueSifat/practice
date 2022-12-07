#include<stdio.h>
int sum(int n,int arr[])
{
    int i,total=0;


    //for(i=0; i<n; i++)

    //{
        if(arr[i]%10==0)
            total+=arr[i];
    //}


}

int main()
{
    int n,i;int total=0;
    scanf("%d",&n);
    int arr[n];
    /*for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }*/

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10==0)
            total+=arr[i];
    }
    printf("%d",total);
    //printf("%d",sum(n,arr));
    //printf("%d",m);
    return 0;
}
