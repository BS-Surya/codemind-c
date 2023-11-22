#include<stdio.h>
int main()
{
    int n,r,a,s=0;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    if(s==a)
    printf("True");
    else
    printf("False");
}