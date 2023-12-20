#include<stdio.h>
int main()
{
    int n,i,s=0,c=0;
    float b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    b=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=b)
        c=c+1;
    }
    printf("%d",c);
}