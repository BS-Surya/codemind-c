#include<stdio.h>
int main()
{
    int n,c,f=0,s=1,m,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=f+s;
        if(m==n)
        c=c+1;
        f=s;
        s=m;
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}