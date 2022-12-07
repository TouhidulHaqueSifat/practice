#include<stdio.h>
float area(float r);

int main()
{
    float r;
    scanf("%f",&r);
    float m=area(r);
    printf("%f",m);
    return 0;
}
float area(float r)
{
    float radius=3.1416*r*r;
    return radius;
}
