#include<stdio.h>
int main()
{
    int a,b,i,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0)
        s=s+1;
    }
    printf("%d",s);
}