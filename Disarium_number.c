#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,t=0,s=0,c=0,m,p;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s*10+r;
    }
    while(s!=0)
    {
        p=s%10;
        s=s/10;
        c=c+1;
        t=t+pow(p,c);
    }
    if(t==m)
    printf("True");
    else 
    printf("False");
}