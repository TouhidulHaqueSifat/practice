#include<stdio.h>

int main()
{
   float x,y;
   float*p,*q;
    p=&x;
    q=&y;
    scanf("%f %f",p,q);
    float sum=0;
    sum=(*p+*q)/2;
    printf("%.3f",sum);
    return 0;
}
