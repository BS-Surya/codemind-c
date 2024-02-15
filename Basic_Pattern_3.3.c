#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int p=1;
        for(j=n;j>=i;j--)
        {
            printf("%d ",p);
            p++;
        }
        printf("
");
    }
}