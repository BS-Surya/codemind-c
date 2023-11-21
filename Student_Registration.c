#include<stdio.h>
int main()
{
    int t,k,m,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d%d%d",&n,&m,&k);
    if(k+n<=m)
    {
    printf("YES
");
    }
    else
    {
    printf("NO
");
    }
    }
}