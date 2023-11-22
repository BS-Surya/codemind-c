#include<stdio.h>
int main()
{
    int a,b,i,s=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        s=s+i;
    }
    if(s==b)
    printf("Amicable");
    else
    printf("Not Amicable");
}