#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(n%i==0)
        s=s+1;
        i++;
    }
       if(s==2)
       printf("Prime");
       else
       printf("Not Prime");
}