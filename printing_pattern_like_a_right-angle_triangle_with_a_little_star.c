#include<stdio.h>
int main()
{
    int i,n,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(s=1;s<=i;s++)
       {
       printf("*");
       }
       printf("
");
    }
}