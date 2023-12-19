#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=arr[0];
    for(i=0;i<n;i++)
    {
        if(m>arr[i])
        m=arr[i];
    }
    printf("%d",m);
}