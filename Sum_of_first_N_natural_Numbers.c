#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    printf("%d",s);
}