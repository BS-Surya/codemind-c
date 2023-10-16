#include<stdio.h>
int main()
{
    int a,b,A,B;
    scanf("%d%d%d%d",&a,&b,&A,&B);
    if(a+b<A+B)
    printf("%d",a+b);
    else if(a+b>A+B)
    printf("%d",A+B);
    else
    printf("%d",a+b);
}