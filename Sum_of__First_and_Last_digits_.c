#include<stdio.h>
int main()
{
    int i,n,r,s=0;
    scanf("%d",&n);
    i=n%10;
    while(n!=1)
    {
        r=n%10;
        n=n/10;
    }
    printf("%d",i+n);
}