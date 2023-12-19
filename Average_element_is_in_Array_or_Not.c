#include<stdio.h>
int main()
{
    int n,i,b,s=0,c;
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
        if(b==a[i])
        c=1;
    }
    if(c==1)
    printf("True");
    else
    printf("False");
}