#include<stdio.h>
int main()
{
    int n,i,s,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+1;
            if(i%2==0)
            {
                d=d+1;
            }
        }
    }
    if(s==d)
    printf("True");
    else
    printf("False");
}