#include<stdio.h>
int main()
{
    int n,f=0,s=1,m,i;
    scanf("%d",&n);
    printf("0 1 ");
    for(i=3;i<=n;i++)
    {
        m=f+s;
        printf("%d ",m);
        f=s;
        s=m;
    }
}