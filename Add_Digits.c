#include<stdio.h>
int main()
{
    int n,r1,r2,s=0,c=0,r3,p=0;
    scanf("%d",&n);
    while(n>0)
    {
        r1=n%10;
        n=n/10;
        s+=r1;
    }
    while(s>0)
    {
        r2=s%10;
        s=s/10;
        c+=r2;
    }
    while(c>0)
    {
        r3=c%10;
        c=c/10;
        p+=r3;
    }
    printf("%d",p);
}